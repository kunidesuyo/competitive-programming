#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;

using namespace std;

int main() {
  ll n, m;
  cin >> n >> m;
  ll a[n+1];
  ll s[n+1];
  s[0] = 0;
  for(ll i = 1; i <= n; i++) {
    cin >> a[i];
    s[i] = s[i-1] + a[i];
  }
  ll num = 0;
  for(ll i = 1; i <= m; i++) num += i * a[i];
  ll ans = num;
  for(ll i = 2; i+m-1 <= n; i++) {
    ll diff = -(s[i+m-2] - s[i-2]);
    diff += a[i+m-1] * m;
    num += diff;
    ans = max(ans, num);
  }
  cout << ans << endl;
  return 0;
}