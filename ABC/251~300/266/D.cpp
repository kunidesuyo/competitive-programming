#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;

using namespace std;

int main() {
  ll n;
  cin >> n;
  ll max_t = -1;
  ll t[n];
  ll x[n];
  ll a[n];
  for(ll i = 0 ; i < n; i++) {
    cin >> t[i] >> x[i] >> a[i];
    max_t = max(max_t, t[i]);
  }
  vector<vector<ll>> snuke(max_t+1, vector<ll>(5, 0));
  for(ll i = 0; i < n; i++) snuke[t[i]][x[i]] = a[i];
  ll dp[max_t+1][5];
  for(ll i = 0; i < max_t+1; i++) {
    for(ll j = 0; j < 5; j++) {
      dp[i][j] = 0;
    }
  }
  ll dj[3] = {-1, 0, 1};
  for(ll i = 0; i < max_t; i++) {
    for(ll j = 0; j < 5; j++) {
      if(j > i) continue;
      for(ll k = 0; k < 3; k++) {
        ll next_j = j + dj[k];
        if(0 <= next_j && next_j <= 4) {
          dp[i+1][next_j] = max(dp[i+1][next_j], dp[i][j] + snuke[i+1][next_j]);
        }
      }
    }
  }

  ll ans = -1;
  for(ll i = 0; i < 5; i++) {
    ans = max(ans, dp[max_t][i]);
  }
  cout << ans << endl;

  return 0;
}