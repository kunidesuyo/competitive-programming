#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  ll x, a, d, n;
  cin >> x >> a >> d >> n;
  if(x < a) {
    if(d >= 0) {
      cout << a-x << endl;
      return 0;
    } 
  } else if(x > a) {
    if(d <= 0) {
      cout << x-a << endl;
      return 0;
    }
  } else {
    cout << 0 << endl;
    return 0;
  }
  if(d <= 0) {
    a *= -1;
    d *= -1;
    x *= -1;
    x -= a;
    a = 0;
  } else {
    x -= a;
    a = 0;
  }
  ll last = d * (n-1);
  if(last <= x) {
    cout << x - last << endl;
    return 0;
  }
  ll b = x % d;
  ll c = d - b;
  cout << min(b, c) << endl;
  return 0;
}