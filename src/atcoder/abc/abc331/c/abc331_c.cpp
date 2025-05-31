#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  vector<ll> x(n);

  for (ll i = 0; i < n; i++) {
    cin >> a[i];
    x[i] = a[i];
  }
  ll sum = accumulate(all(a), 0);
  sort(all(a));

  vector<ll> b(n + 1);
  b[0] = 0;
  for (ll i = 0; i < n; i++) {
    b[i + 1] = b[i] + a[i];
  }

  map<ll, ll> m;
  vector<ll> ans(n);
  for (ll i = 0; i < n; i++) {
    ll now = a[i];
    ll index = upper_bound(all(a), now) - a.begin();
    m[now] = sum - b[index];
  }

  for (ll i = 0; i < n; i++) {
    if (i != 0) cout << " ";
    cout << m[x[i]];
  }
  cout << "\n";

  return 0;
}