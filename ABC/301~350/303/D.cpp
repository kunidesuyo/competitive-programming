#include <bits/stdc++.h>

#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;
const ll INF = 1LL << 60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int x, y, z;
  cin >> x >> y >> z;
  string s;
  cin >> s;
  int n = s.length();

  ll dp[2][n + 1];
  dp[0][0] = 0;
  dp[1][0] = z;

  for (int i = 0; i < n; i++) {
    if (s[i] == 'a') {
      dp[0][i + 1] = min(dp[0][i] + x, min(dp[1][i] + z + x, dp[1][i] + y + z));
      dp[1][i + 1] = min(min(dp[0][i] + z + y, dp[0][i] + x + z), dp[1][i] + y);
    } else {
      dp[0][i + 1] = min(dp[0][i] + y, min(dp[1][i] + z + y, dp[1][i] + x + z));
      dp[1][i + 1] = min(min(dp[0][i] + z + x, dp[0][i] + y + z), dp[1][i] + x);
    }
  }

  // for(int i = 0; i < 2; i++) {
  //   for(int j = 0; j <= n; j++) {
  //     cout << dp[i][j] << " ";
  //   }
  //   cout << "\n";
  // }
  cout << min(dp[0][n], dp[1][n]) << endl;

  return 0;
}