#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  ll n, t;
  cin >> n >> t;
  ll a[n];
  for(ll i = 0; i < n; i++) cin >> a[i];
  ll total = 0;
  for(int i = 0; i < n; i++) {
    total += a[i];
  }
  t %= total;
  for(int i = 0; i < n; i++) {
    t -= a[i];
    if(t < 0) {
      cout << i+1 << " " <<  a[i] + t << endl;
      return 0;
    }
  }
  return 0;
}