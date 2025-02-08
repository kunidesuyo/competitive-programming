#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;
const ll INF = 1LL << 60;
const int inf = INT_MAX / 2;

ll mod = 998244353;
ll modpow(ll a, ll n) {
  ll res = 1;
  while (n > 0) {
    if (n & 1) res = res * a % mod;
    a = a * a % mod;
    n >>= 1;
  }
  return res;
}

int main() {
  int q;
  cin >> q;
  ll s = 1;
  deque<int> ss;
  ss.push_back(1);
  for (int i = 0; i < q; i++) {
    int a;
    cin >> a;
    int x;
    if (a == 1) cin >> x;
    if (a == 1) {
      s *= 10;
      s += x;
      s %= mod;
      ss.push_back(x);
    } else if (a == 2) {
      ll d = modpow(10, (int)ss.size()-1);
      ll front = ss.front();
      ss.pop_front();
      d *= front;
      d %= mod;
      s -= d;
      while (s < 0) s += mod;
      s %= mod;
    } else {
      cout << s % mod << endl;
    }
    // cout << i << " " << s << endl;
  }
  return 0;
}