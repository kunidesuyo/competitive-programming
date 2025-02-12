#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;
const ll INF = 1LL << 60;
const int inf = INT_MAX / 2;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> g(n);
  // R = 1, B = 0
  vector<vector<bool>> con(n, vector<bool>(2, false));
  for (int i = 0; i < m; i++) {
    int a, c;
    char b, d;
    cin >> a >> b >> c >> d;
    a--;
    c--;
    g[a].push_back(c);
    g[c].push_back(a);
    int ax = (b == 'R') ? 1 : 0;
    int cx = (d == 'R') ? 1 : 0;
    con[a][ax] = true;
    con[c][cx] = true;
  }
  vector<bool> d(n, false);
  int x = 0;
  int y = 0;
  // cout << 'a' << endl;
  for (int start = 0; start < n; start++) {
    if (d[start] == true) continue;
    stack<int> st;
    st.push(start);
    vector<int> group;
    group.push_back(start);
    while (!st.empty()) {
      int now = st.top();
      st.pop();
      d[now] = true;
      group.push_back(now);
      for (auto next : g[now]) {
        if (d[next] == false) {
          st.push(next);
        }
      }
    }
    bool ok = true;
    for (auto gg : group) {
      // cout << gg;
      if (con[gg][0] == true && con[gg][1] == true) continue;
      ok = false;
    }
    // cout << "\n";
    if (ok) {
      x++;
    } else {
      y++;
    }
  }
  cout << x << " " << y << endl;
  return 0;
}