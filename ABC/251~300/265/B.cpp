#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;

using namespace std;

int main() {
  ll n, m , t;
  cin >> n >> m >> t;
  ll a[n];
  for(ll i = 1; i <= n-1; i++) cin >> a[i];
  // ll x[m+1], y[m+1];
  vector<ll> y(n+1, 0);
  for(ll i = 1; i <=m; i++){
    ll xx, yy;
    cin >> xx >> yy;
    y[xx] = yy;
  }
  
  for(ll i = 1; i <= n-1; i++) {
    t += y[i];
    t -= a[i];
    if(t <= 0) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}