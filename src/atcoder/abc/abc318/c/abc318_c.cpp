#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;

int main() {
  ll n, d, p;
  cin >> n >> d >> p;
  vector<ll> f(n);
  for (ll i = 0; i < n; i++) cin >> f[i];

  sort(all(f), greater<ll>());

  ll s = n / d;
  // ll t = n % d;
  vector<ll> ff;
  for (ll i = 0; i < s; i++) {
    ll sum = 0;
    for (ll j = 0; j < d; j++) {
      ll index = d * i + j;
      sum += f[index];
    }
    ff.push_back(sum);
  }
  ll sum = 0;
  for (ll i = s * d; i < n; i++) {
    sum += f[i];
  }
  ff.push_back(sum);

  ll ans = 0;
  for (auto g : ff) {
    // cout << g << endl;
    ans += min(g, p);
  }
  cout << ans << endl;

  return 0;
}