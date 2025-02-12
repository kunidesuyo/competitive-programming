#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

ll cost(ll x, ll y) {
  if(x > y) return 0;
  ll xy = x + y;
  xy /= 2;
  xy++;
  return xy - x;
}

int main() {
  int n;
  cin >> n;
  vector<ll> x(n), y(n), z(n);
  ll tz = 0;
  for(int i = 0; i < n; i++) {
    cin >> x[i] >> y[i] >> z[i];
    tz += z[i];
  }

  vector<vector<ll>> dp(n+1, vector<ll>(tz+1, INF));
  dp[0][0] = 0;

  for(int i = 1; i <= n; i++) {
    for(int j = 0; j <= tz; j++) {
      dp[i][j] = min(dp[i][j], dp[i-1][j]);
      if(j-z[i-1] >= 0) dp[i][j] = min(dp[i][j], dp[i-1][j-z[i-1]]+cost(x[i-1], y[i-1]));
    }
  }

  // for(int i = 0; i <= n; i++) {
  //   for(int j = 0; j <= tz; j++) {
  //     cout << dp[i][j];
  //   }
  //   cout << "\n";
  // }

  ll zm = tz/2 + 1;
  ll ans = INF;
  for(int i = zm; i <= tz; i++) {
    ans = min(ans, dp[n][i]);
  }
  cout << ans << endl;


  return 0;
}