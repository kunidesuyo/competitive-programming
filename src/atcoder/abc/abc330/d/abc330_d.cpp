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
  string s[n];
  for (ll i = 0; i < n; i++) cin >> s[i];
  vector<ll> retu(n, 0);
  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < n; j++) {
      if (s[j][i] == 'o') retu[i]++;
    }
  }

  ll ans = 0;
  for (ll i = 0; i < n; i++) {
    ll sum = 0;
    for (ll j = 0; j < n; j++) {
      if (s[i][j] == 'o') sum++;
    }
    sum--;
    if (sum <= 0) continue;
    for (ll j = 0; j < n; j++) {
      if (s[i][j] == 'o') ans += (retu[j] - 1) * sum;
    }
  }
  cout << ans << endl;
  return 0;
}