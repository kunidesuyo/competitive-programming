#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;

using namespace std;

int main() {
  ll n, a, b;
  cin >> n >> a >> b;
  ll p, q, r, s;
  cin >> p >> q >> r >> s;
  for(ll i = p; i <= q; i++) {
    for(ll j = r; j <= s; j++) {
      char now = '.';
      if(i-a == j-b) {
        ll k = i-a;
        if(max(1-a, 1-b) <= k && k <= min(n-a, n-b)) {
          now = '#';
        }
      }
      if(i-a == -(j-b)) {
        ll k = i-a;
        if(max(1-a, b-n) <= k && k <= min(n-a, b-1)) {
          now = '#';
        }
      }
      cout << now;
    }
    cout << "\n";
  }
  return 0;
}