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
  int n;
  cin >> n;
  ll d[n][n];
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      cin >> d[i][j];
      d[j][i] = d[i][j];
    }
  }

  vector<ll> dp(1 << n, -1);
  dp[0] = 0;

  for (int bit = 0; bit < 1 << n; bit++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (i == j) continue;
        if (bit & (1 << i) || bit & (1 << j)) continue;
        if(dp[bit] == -1) continue;
        int next_bit = bit;
        next_bit |= (1 << i);
        next_bit |= (1 << j);
        dp[next_bit] = max(dp[next_bit], dp[bit] + d[i][j]);
      }
    }
  }

  ll ans = -1;
  for(int i = 0; i < 1<<n; i++) {
    ans = max(ans, dp[i]);
    // cout << i << " " << dp[i] << "\n";
  }

  cout << ans << endl;

  return 0;
}