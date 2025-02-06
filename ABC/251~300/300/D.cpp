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
  ll n;
  cin >> n;
  int m = 1e6 / 3 + 1;

  vector<bool> mp(m + 1, true);

  vector<ll> p;

  for (int i = 2; i <= m; i++) {
    if (mp[i] == false) continue;
    p.push_back(i);
    for (int j = 2; i * j <= m; j++) {
      mp[i * j] = false;
    }
  }

  int ans = 0;
  int sz = p.size();
  for (int i = 0; i <= sz; i++) {
    ll a = p[i];
    if (a * a * a * a * a > n) break;
    for (int j = i + 1; j <= sz; j++) {
      ll b = p[j];
      if (a * a * b * b * b > n) break;
      for (int k = j + 1; k <= sz; k++) {
        ll c = p[k];
        ll t = a * a * b;
        if(t > n) break;
        t *= c;
        if(t > n) break;
        t *= c;
        if (t <= n) {
          ans++;
        } else {
          break;
        }
      }
    }
  }

  cout << ans << endl;

  return 0;
}