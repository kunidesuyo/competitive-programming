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
  vector<string> s(n);
  for (int i = 0; i < n; i++) cin >> s[i];
  vector<vector<bool>> d(n, vector<bool>(m, false));
  vector<vector<bool>> start(n, vector<bool>(m, false));
  int di[4] = {0, 1, 0, -1};
  int dj[4] = {1, 0, -1, 0};

  stack<pair<int, int>> st;
  d[1][1] = true;
  start[1][1] = true;
  st.push({1, 1});
  while (!st.empty()) {
    pair<int, int> now = st.top();
    st.pop();
    start[now.first][now.second] = true;
    for (int i = 0; i < 4; i++) {
      pair<int, int> next = now;
      vector<pair<int, int>> path;
      path.push_back(now);
      while (true) {
        int nf = next.first + di[i];
        int ns = next.second + dj[i];
        // if (!(0 <= nf && nf < n && 0 <= ns && ns < m)) {
        //   break;
        // }
        if (s[nf][ns] == '#') {
          if (start[next.first][next.second] == false) {
            st.push(next);
          }
          for (auto p : path) {
            d[p.first][p.second] = true;
          }
          // cout << next.first << " " << next.second << endl;
          break;
        }
        next.first = nf;
        next.second = ns;
        path.push_back(next);
        // d[nf][ns] = true;
      }
    }
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (d[i][j]) ans++;
      // if(d[i][j] == true) {
      //   cout << 1;
      // } else {
      //   cout << s[i][j];
      // }
    }
    // cout << "\n";
  }
  cout << ans << endl;

  return 0;
}