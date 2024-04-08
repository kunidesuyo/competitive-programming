#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  ll n;
  cin >> n;
  ll a[n], b[n];
  for(ll i = 0; i < n; i++) cin >> a[i] >> b[i];
  ll mod = 998244353;

  vector<vector<ll>> dp(n, vector<ll>(2, 0));
  dp[0][0] = 1;
  dp[0][1] = 1;
  for(ll i = 1; i < n; i++) {
    if(a[i-1] != a[i]) dp[i][0] += dp[i-1][0];
    if(b[i-1] != a[i]) dp[i][0] += dp[i-1][1];
    if(a[i-1] != b[i]) dp[i][1] += dp[i-1][0];
    if(b[i-1] != b[i]) dp[i][1] += dp[i-1][1];
    dp[i][0] %= mod;
    dp[i][1] %= mod;
  }

  cout << (dp[n-1][0] + dp[n-1][1]) % mod << endl;
  
  return 0;
}