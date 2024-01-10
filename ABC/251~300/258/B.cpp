#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
  ll n;
  cin >> n;
  ll a[n][n];
  string s[n];
  for(ll i = 0; i < n; i++) {
    for(ll j = 0; j < n; j++) {
      char c;
      cin >> c;
      a[i][j] = c - '0';
    }
  }
  ll ans = -1;
  ll di[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
  ll dj[8] = {0, 1, 1, 1, 0, -1, -1, -1};
  for(ll i = 0; i < n; i++) {
    for(ll j = 0; j < n; j++) {
      for(ll k = 0; k < 8; k++) {
        ll sum = 0;
        for(ll l = 0; l < n; l++) {
          ll index_i = (i + di[k] * l + n) % n;
          ll index_j = (j + dj[k] * l + n) % n;
          // cout << "ij:" << index_i << index_j << endl;
          sum *= 10;
          // cout << sum << endl;
          sum += a[index_i][index_j];
          // cout << sum << endl;
        }
        ans = max(ans, sum);
      }
    }
  }
  cout << ans << endl;
  return 0;
}