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
  string s;
  cin >> s;
  ll sn = s.length();
  ll n;
  cin >> n;

  reverse(s.begin(), s.end());

  string t = s;

  for (ll i = 0; i < sn; i++) {
    if (t[i] == '?') t[i] = 0;
  }
  ll tv = 0;
  ll d = 1;
  for (ll i = 0; i < sn; i++) {
    if (t[i] == '1') tv += d;
    d *= 2;
  }
  if (tv > n) {
    cout << -1 << endl;
    return 0;
  }

  stack<ll> a;
  d = 1;
  for (ll i = 0; i < sn; i++) {
    if (s[i] == '?') a.push(d);
    d *= 2;
  }

  while (!a.empty()) {
    ll now = a.top();
    a.pop();
    if(tv+now <= n) {
      tv += now;
    }
  }
  cout << tv << endl;

  return 0;
}