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
  ll d;
  cin >> d;
  vector<ll> s;
  for (ll i = 0;; i++) {
    if (i * i > d) break;
    s.push_back(i * i);
  }

  ll ans = d + 1;
  for (auto ss : s) {
    ll x = d - ss;
    // xをまたぐ隣接する要素を取得
    ll index = lower_bound(all(s), x) - s.begin();
    ans = min(ans, abs(ss + s[index] - d));
    if (index - 1 > 0) ans = min(ans, abs(ss + s[index - 1] - d));
  }
  cout << ans << endl;
  return 0;
}