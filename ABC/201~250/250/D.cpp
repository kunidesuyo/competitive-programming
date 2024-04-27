#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;

using namespace std;

bool is_primal(ll x) {
  if(x == 1) return false;
  for(ll r = 2; r*r <= x; r++) {
    if(x % r == 0) return false;
  }
  return true;
}

int main() {
  ll n;
  cin >> n;
  ll ans = 0;
  vector<ll> prim;
  for(ll i = 2; i*i*i <= n; i++) {
    if(is_primal(i)) prim.push_back((ll)i);
  }

  for(int q : prim) {
    ll r = min<ll>(n/q/q/q, q);
    int index = lower_bound(all(prim), r) - prim.begin();
    cout << q << " " << r << " " <<  index << " " << prim[index] << endl;
    if(q != prim[index]) ans++;
    ans += index;
  }
  cout << ans << endl;
  return 0;
}