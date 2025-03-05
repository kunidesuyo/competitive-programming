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
  vector<int> a(m);
  vector<int> b(m);
  vector<int> c(m);
  for (int i = 0; i < m; i++) {
    cin >> a[i] >> b[i] >> c[i];
    a[i]--;
    b[i]--;
  }

  int dp[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) {
        dp[i][j] = 0;
      } else {
        dp[i][j] = inf;
      }
    }
  }

  for (int i = 0; i < m; i++) {
    dp[a[i]][b[i]] = c[i];
    dp[b[i]][a[i]] = c[i];
  }

  for (int k = 0; k < n; k++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
      }
    }
  }
  int ans = -1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (dp[i][j] == inf) continue;
      ans = max(ans, dp[i][j]);
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (dp[i][j] == inf) cout << "inf";
      else cout <<dp[i][j];
      cout << " ";
    }
    cout << "\n";
  }
  cout << ans << endl;
  return 0;
}