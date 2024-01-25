#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;

using namespace std;

int main() {
  ll n, m;
  cin >> n >> m;
  ll a[n+1];
  for(ll i = 0; i < n; i++) cin >> a[i];

  ll dp[n+1][n+1];
  for(ll i = 0; i <= n; i++) dp[i][0] = 0;
  dp[0][1] = -1000000000000000000ll;
  for(ll i = 1; i <= n; i++) {
    for(ll j = 1; j <= n; j++) {
      if(i < j) dp[i][j] = -1000000000000000000ll;
      else dp[i][j] = max(dp[i-1][j-1] + j*a[i-1], dp[i-1][j]);
    }
  }
  // for(int i = 0; i <= n; i++) {
  //   for(int j = 0; j <=m; j++) {
  //     cout << dp[i][j] << " ";
  //   }
  //   cout << "\n";
  // }
  cout << dp[n][m] << endl;
  return 0;
}