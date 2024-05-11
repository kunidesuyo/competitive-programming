#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int t;
  cin >> t;
  for(int i = 0; i < t; i++) {
    ll n;
    cin >> n;
    ll p = -1;
    ll q = -1;
    ll x = 2;
    while(true) {
      bool end = false;
      if(n % x == 0) {
        if(n % (x*x) == 0) {
          p = x;
          n /= p;
          n /= p;
          q = n;
          end = true;
        } else {
          q = x;
          n /= q;
          end = true;
        }
      }
      x++;
      if(end) break;
    }
    if(p == -1) {
      p = (ll) round(sqrt(n));
      cout << p << " " << q << endl;
    } else {
      cout << p << " " << q << endl;
    }
  }
  return 0;
}