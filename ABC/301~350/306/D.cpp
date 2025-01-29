#include <bits/stdc++.h>

#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;
const ll INF = 1LL << 60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n;
  cin >> n;
  int x[n], y[n];
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }
  ll dp[2][n + 1];
  dp[0][0] = 0;
  dp[1][0] = -1000000000000000;
  for (int i = 0; i < n; i++) {
    if (x[i] == 0) {
      dp[0][i + 1] = max(dp[0][i], max(dp[0][i] + y[i], dp[1][i] + y[i]));
      dp[1][i + 1] = dp[1][i];
    } else {
      dp[0][i + 1] = dp[0][i];
      dp[1][i + 1] = max(dp[0][i] + y[i], dp[1][i]);
    }
  }
  cout << max(dp[0][n], dp[1][n]) << endl;
  return 0;
}