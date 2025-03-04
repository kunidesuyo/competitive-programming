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
  ll num = 0;
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
    num += a[i];
  }
  ll t = num / n;
  // t+1の個数
  ll s = num - t * n;
  vector<ll> goal;
  for (int i = 0; i < n - s; i++) {
    goal.push_back(t);
  }
  for (int i = 0; i < s; i++) {
    goal.push_back(t + 1);
  }
  sort(all(a));


  ll ans = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] - goal[i] > 0) {
      ans += a[i] - goal[i];
    }
  }
  cout << ans << endl;

  // ll s = t+1;
  // ll u_p = 0;
  // ll u_n = 0;
  // // ll v = 0;
  // for (ll i = 0; i < n; i++) {
  //   ll x = a[i] - t;
  //   if (x < 0) {
  //     u_n += x;
  //   } else {
  //     u_p += x;
  //   }
  //   // v += a[i] - s;
  // }
  // cout << abs(u_n - u_p) / 2 << endl;
  // // cout << min(abs(target - u_n), abs(target - u_p)) << endl;
  return 0;
}