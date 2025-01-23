#include <bits/stdc++.h>

#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;
const ll INF = 1LL << 60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  ll n, m, d;
  cin >> n >> m >> d;
  vector<ll> a(n), b(m);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  ll ans = -1;
  for (int i = 0; i < n; i++) {
    ll l = a[i] - d;
    ll r = a[i] + d;
    int x = upper_bound(b.begin(), b.end(), r) - b.begin();
    x--;
    if (x >= 0) {
      ll target = b[x];
      if (target >= l) {
        ans = max(ans, a[i] + target);
      }
    }
  }

  cout << ans << endl;
  return 0;
}