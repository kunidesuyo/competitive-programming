#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;

using namespace std;

int main() {
  ll x, k;
  cin >> x >> k;
  ll t;
  for(ll i = 0; i < k; i++) {
    if(i == 0) {
      t = 1;
    } else {
      t *= 10;
    }
    ll tmp = x % (t*10);
    tmp /= t;
    ll tmp2 = x - x % (t*10);
    x = tmp2;
    if(tmp >= 5) {
      x += (t*10);
    }
  }
  cout << x << endl;
  return 0;
}