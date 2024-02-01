#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  ll mod = 998244353;
  ll a[6];
  for(int i = 0; i < 6; i++) {
    cin >> a[i];
    a[i] %= mod;
  }
  ll x, y;
  for(int i = 0; i < 3; i++) {
    if(i == 0) {
      x = a[0];
      continue;
    }
    x *= a[i];
    x %= mod;
  }
  for(int i = 3; i < 6; i++) {
    if(i == 3) {
      y = a[3];
      continue;
    }
    y *= a[i];
    y %= mod;
  }
  ll ans = x - y + mod;
  ans %= mod;
  cout << ans << endl;
  return 0;
}