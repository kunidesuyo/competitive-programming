#include <bits/stdc++.h>

#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;
const ll INF = 1LL << 60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> p(n);
  for (int i = 1; i < n; i++) {
    cin >> p[i];
    p[i]--;
  }

  vector<pair<int, int>> xy(m);
  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    x--;
    xy[i].first = x;
    xy[i].second = y;
  }

  sort(xy.begin(), xy.end());
  int xyi = 0;

  vector<int> dp(n, -1);
  for (int i = 0; i < n; i++) {
    if (i != 0) {
      dp[i] = max(-1, dp[p[i]] - 1);
    }
    while (true) {
      if (xyi >= m) break;
      if (xy[xyi].first == i) {
        dp[i] = max(dp[i], xy[xyi].second);
        xyi++;
      } else {
        break;
      }
    }
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (dp[i] >= 0) ans++;
  }
  cout << ans << endl;

  // for (int i = 0; i < n; i++) queue<int> q;
  // vector<int> d(n, -1);
  // d[0] = 0;
  // q.push(0);
  // while (!q.empty()) {
  //   int now = q.front();
  //   q.pop();
  //   for (auto next : s[now]) {
  //     if (d[next] == -1) {
  //       d[next] = d[now] + 1;
  //       q.push(next);
  //     }
  //   }
  // }

  // set<int> st;
  // for (int i = 0; i < m; i++) {
  // }

  return 0;
}