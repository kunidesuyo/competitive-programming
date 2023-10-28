#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;

using namespace std;

ll sum_tousa(ll first, ll diff, ll n) {
  return (first + first + diff * (n-1)) * n / 2;
}

ll gcd(ll a, ll b) {
  if (a % b == 0) {
    return(b);
  } else {
    return(gcd(b, a % b));
  }
}

ll lcm(ll a, ll b) {
  return a * b / gcd(a, b);
}

int main() {
  ll n, a, b;
  cin >> n >> a >> b;

  ll ans = sum_tousa(1, 1, n);
  ll suma = n / a;
  ans -= sum_tousa(a, a, suma);
  ll sumb = n / b;
  ans -= sum_tousa(b, b, sumb);
  ll ab = lcm(a, b);
  ll sumab = n / ab;
  ans += sum_tousa(ab, ab, sumab);
  cout << ans << endl;

  return 0;
}