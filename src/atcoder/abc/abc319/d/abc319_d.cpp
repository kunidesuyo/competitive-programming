#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;
const ll INF = 1LL << 60;

// ll n;
// vector<ll> L(3e5);

// ll line(ll w) {
//   ll now = L[0];
//   if(now > w) return INF;
//   ll lines = 1;
//   for (ll i = 1; i < n; i++) {
//     ll d = now;
//     if (d != 0) d++;
//     d += L[i];
//     if (d > w) {
//       lines++;
//       now = L[i];
//     } else {
//       now = d;
//     }
//   }
//   return lines;
// }

int main() {
  ll n, m;
  cin >> n >> m;
  vector<ll> L(n);
  ll max_l = -1;
  for (ll i = 0; i < n; i++) {
    cin >> L[i];
    max_l = max(max_l, L[i]);
  }
  // binary search
  ll l = 0;
  ll r = INF;
  while (r - l > 1) {
    ll w = (l + r) / 2;
    auto f = [&](ll w) {
      ll line = 0;
      ll rem = 0;
      for (int i = 0; i < n; i++) {
        if (rem >= L[i] + 1) {
          rem -= L[i] + 1;
        } else {
          line++;
          rem = w - L[i];
          if(rem < 0) return false;
        }
      }
      return line <= m;
    };

    if (f(w)) {
      r = w;
    } else {
      l = w;
    }
  }
  cout << r << endl;
  return 0;
}