#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;

using namespace std;

int main() {
  ll n;
  cin >> n;
  ll a[n], b[n], c[n];
  for(ll i = 0; i < n; i++) cin >> a[i];
  for(ll i = 0; i < n; i++) cin >> b[i];
  for(ll i = 0; i < n; i++) cin >> c[i];

  sort(a, a+n);
  sort(b, b+n);
  sort(c, c+n);

  ll bb[n];
  for(ll i = 0; i < n; i++) {
    ll now = b[i];
    ll left = -1;
    ll right = n;
    while(right - left > 1) {
      ll mid = (left + right) / 2;
      if(now < c[mid]) {
        right = mid;
      } else {
        left = mid;
      }
    }
    bb[i] = n - right;
    // cout << right << " " << bb[i] << endl;
  }
  ll bbb[n+1];
  bbb[0] = 0;
  for(ll i = 0; i < n; i++) {
    bbb[i+1] = bbb[i] + bb[i];
  }
  ll ans = 0;
  for(ll i = 0; i < n; i++) {
    ll now = a[i];
    ll left = -1;
    ll right = n;
    while(right - left > 1) {
      ll mid = (left + right) / 2;
      if(now < b[mid]) {
        right = mid;
      } else {
        left = mid;
      }
    }
    ans += bbb[n] - bbb[right];
  }
  cout << ans << endl;
  
  return 0;
}