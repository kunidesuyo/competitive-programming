#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;
const ll INF = 1LL << 60;
const int inf = INT_MAX / 2;

int main() {
  ll a, m, l, r;
  cin >> a >> m >> l >> r;

  ll x, y;
  ll la = l - a;
  ll ra = r - a;
  if (l - a < 0) {
    x = a - l;
    y = x / m + 1;
    la += y*m;
    ra += y*m;
  }
  // y* m;

  ll k, kk;
  ll d = (la) % m;
  if (d == 0) {
    k = (la) / m;
  } else {
    k = (la) / m + 1;
  }


  kk = (ra) / m;

  ll ans = kk - k + 1 >= 0 ? kk - k + 1 : 0;
  // max(0, kk-k+1);

  cout << ans << endl;

  // if (kk < k) {
  //   cout << 0 << endl;
  // } else {
  //   cout << kk - k + 1 << endl;
  // }

  return 0;
}