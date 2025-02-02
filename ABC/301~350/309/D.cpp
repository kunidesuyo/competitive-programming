#include <bits/stdc++.h>

#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;
const ll INF = 1LL << 60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n1, n2, m;
  cin >> n1 >> n2 >> m;
  vector<vector<int>> s(n1 + n2);
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    s[a].push_back(b);
    s[b].push_back(a);
  }

  queue<int> ss;
  vector<int> d(n1 + n2, -1);
  ss.push(0);
  d[0] = 0;
  while (!ss.empty()) {
    int now = ss.front();
    ss.pop();
    for (auto next : s[now]) {
      if (d[next] == -1) {
        d[next] = d[now] + 1;
        ss.push(next);
      }
    }
  }
  int max_s = -100;
  for (int i = 0; i < n1; i++) {
    // cout << d[i] << " ";
    max_s = max(max_s, d[i]);
  }
  // cout << "\n";

  queue<int> st;
  st.push(n1 + n2 - 1);
  d[n1 + n2 - 1] = 0;
  while (!st.empty()) {
    int now = st.front();
    st.pop();
    for (auto next : s[now]) {
      if (d[next] == -1) {
        d[next] = d[now] + 1;
        st.push(next);
      }
    }
  }
  int max_t = -100;
  for (int i = n1; i < n1 + n2; i++) {
    max_t = max(max_t, d[i]);
  }

  // cout << max_s << endl;
  // cout << max_t << endl;
  cout << max_s + max_t + 1 << endl;

  return 0;
}