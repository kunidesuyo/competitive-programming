#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;

using namespace std;

int main() {
  string s;
  cin >> s;
  ll k;
  cin >> k;
  ll n = s.length();
  ll a[n];
  for(ll i = 0; i < n; i++) a[i] = s[i] == '.';

  ll ans = 0;
  ll r = 0, sum = 0;
  for(ll l = 0; l < n; l++) {
    while(r < n && sum+a[r] <= k) {
      sum += a[r];
      r++;
    }
    ans = max(ans, r-l);
    sum -= a[l];
  }
  cout << ans << endl;

  return 0;
}