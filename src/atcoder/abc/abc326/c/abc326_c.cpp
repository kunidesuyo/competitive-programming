#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;

int main() {
  ll n, m;
  cin >> n >> m;
  vector<ll> a(n+1);
  for (ll i = 0; i < n; i++) cin >> a[i];
  a[n] = 90000000000;
  sort(all(a));
  // for (int i = 0; i < n; i++) cout << a[i] << " ";
  // cout << "\n";

  ll ans = -1;
  ll r = 0;
  for (ll l = 0; l < n; l++) {
    // cout << ans << endl;
    while (a[r] < a[l] + m) {
      r++;
    }
    ans = max(ans, r - l);
  }

  cout << ans << endl;
  return 0;
}