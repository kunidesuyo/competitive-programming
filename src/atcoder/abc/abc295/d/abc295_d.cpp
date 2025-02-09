#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;

int main() {
  string s;
  cin >> s;

  ll n = s.length();
  map<string, ll> x;
  vector<string> bit(n + 1);
  bit[0] = "0000000000";
  x[bit[0]]++;

  for (ll i = 1; i <= n; i++) {
    ll si = i - 1;
    ll target = s[si] - '0';
    // x[i] = x[i - 1];
    bit[i] = bit[i - 1];
    if (bit[i][target] == '0') {
      bit[i][target] = '1';
    } else {
      bit[i][target] = '0';
    }
    x[bit[i]]++;
  }

  ll ans = 0;
  // cout << bit[1] << endl;
  // for(auto y: bit) {
  //   cout << y << endl;
  // }

  for (auto xx : x) {
    ans += (xx.second * (xx.second - 1)) / 2;
  }

  // for (ll l = 0; l < n; l++) {
  //   string now_bit = bit[l];
  //   // cout << l << endl;
  //   // cout << now_bit << endl;
  //   // cout << x[n][now_bit] << endl;
  //   // cout << x[l+1][now_bit] << endl;
  //   // cout << "\n";
  //   ans += x[n][now_bit] - x[l + 1][now_bit];
  // }
  cout << ans << endl;

  return 0;
}