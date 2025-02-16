#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;
const ll INF = 1LL << 60;
const int inf = INT_MAX / 2;

bool is_prime(ll x) {
  if (x == 1) return true;
  if (x == 2) return true;
  for (ll y = 2; y * y <= x; y++) {
    if (x % y == 0) return false;
  }
  return true;
}

int main() {
  ll n, m;
  cin >> n >> m;
  ll ans = INF;
  // if (n * n < m) {
  //   cout << -1 << endl;
  //   return 0;
  // }
  // if (m <= n) {
  //   cout << m << endl;
  //   return 0;
  // }
  for (ll a = 1; a <= n; a++) {
    ll b = m / a;
    if (m % a != 0) b++;
    if (a <= n && b <= n) ans = min(ans, a * b);
    if (a > b) break;
  }
  if (ans == INF) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }
  return 0;

  // if (n * n < m) {
  //   cout << -1 << endl;
  //   return 0;
  // }
  // if (m <= n) {
  //   cout << m << endl;
  //   return 0;
  // }
  // ll now = m;
  // while (now <= n * n) {
  //   // nowが素数だと無理
  //   if (is_prime(now)) {
  //     now++;
  //     continue;
  //   }
  //   // cout << now << endl;
  //   bool ok = false;
  //   for (ll a = 2; a * a <= now; a++) {
  //     if (now % a != 0) continue;
  //     // cout << now << " " << a << " " << now / a << endl;
  //     if (a <= n && now / a <= n) {
  //       ok = true;
  //       break;
  //     }
  //   }
  //   if (ok) {
  //     cout << now << endl;
  //     return 0;
  //   }
  //   now++;
  // }
  // cout << -1 << endl;
  // return 0;
}