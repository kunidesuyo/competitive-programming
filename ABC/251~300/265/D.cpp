#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;

using namespace std;

int main() {
  ll n, p, q, r;
  cin >> n >> p >> q >> r;
  ll a[n];
  for(ll i = 0; i < n; i++) cin >> a[i];
  vector<ll> s(n+1, 0);
  s[0] = 0;
  for(ll i = 1; i <= n; i++) s[i] = s[i-1] + a[i-1];
  
  for(ll x = 0; x <= n-3; x++) {
    ll t1 = p + s[x];
    ll y = lower_bound(all(s), t1) - s.begin();
    if(s[y] != t1) continue;

    ll t2 = q + s[y];
    ll z = lower_bound(all(s), t2) - s.begin();
    if(s[z] != t2) continue;

    ll t3 = r + s[z];
    ll w = lower_bound(all(s), t3) - s.begin();
    if(s[w] != t3) continue;
    // if(w > n) continue;

    cout << "Yes" << endl;
    // cout << x<<y<<z<<w << endl;
    return 0;
  }
  cout << "No" << endl;


  return 0;
}