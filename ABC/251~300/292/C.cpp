#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  ll n;
  cin >> n;
  vector<ll> y(n+1, 0);
  for(ll i = 1; i <= n-1; i++) {
    for(ll num = 1; num * num <= i; num++) {
      if(i % num == 0) {
        y[i]++;
        if(num * num != i) y[i]++;
      }
    }
    // cout << i << " " << y[i] << endl;
  }
  ll ans = 0;
  for(ll i = 1; i <= n-1; i++) {
    ans += y[i] * y[n-i];
  }
  cout << ans << endl;
  return 0;
}