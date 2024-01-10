#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
  ll n, x;
  cin >> n >> x;
  ll a[n], b[n];
  for(ll i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }
  ll ans = 9e18;
  ll sum_ab = 0;
  ll min_b = 1e18;
  for(ll i = 0; i < min(x, n); i++) {
    sum_ab += a[i] + b[i];
    min_b = min<ll>(min_b, b[i]);
    ll now = sum_ab + min_b * (x - (i + 1));
    ans = min<ll>(ans, now);
  }
  cout << ans << endl;
  return 0;
}