#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  string s;
  cin >> s;
  ll t = 1;
  ll ans = 0;
  for(ll i = s.length()-1; i >= 0; i--) {
    ll x = s[i] - 'A' + 1;
    // cout << x << endl;
    ans += x * t;
    t *= 26;
  }
  cout << ans << endl;
  return 0;
}