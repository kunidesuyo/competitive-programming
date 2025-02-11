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
  string s;
  cin >> s;
  int n = s.size();
  ll mod = 998244353;
  if (n % 2 != 0) {
    cout << 0 << endl;
    return 0;
  }

  ll dp[n + 1][n + 1];
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= n; j++) {
      dp[i][j] = 0;
    }
  }
  dp[0][0] = 1;

  for (int i = 1; i <= n; i++) {
    int si = i - 1;
    for (int j = 0; j <= n; j++) {
      if (dp[i - 1][j] == 0) continue;
      if (s[si] == '(') {
        dp[i][j + 1] += dp[i - 1][j];
        dp[i][j + 1] %= mod;
      } else if (s[si] == ')') {
        int l = j;
        int r = i - j;
        if (l < r) {
          dp[i][j] = 0;
        } else {
          dp[i][j] += dp[i - 1][j];
          dp[i][j] %= mod;
        }
      } else {
        // (
        dp[i][j + 1] += dp[i - 1][j];
        dp[i][j + 1] %= mod;
        // )
        int l = j;
        int r = i - j;
        if (l < r) {
          dp[i][j] = 0;
        } else {
          dp[i][j] += dp[i - 1][j];
          dp[i][j] %= mod;
        }
      }
    }
  }

  // for (int i = 0; i <= n; i++) {
  //   for (int j = 0; j <= n; j++) {
  //     cout << dp[i][j];
  //   }
  //   cout << "\n";
  // }
  cout << dp[n][n / 2] << endl;

  return 0;
}