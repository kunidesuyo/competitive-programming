#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;
const ll INF = 1LL << 60;
const int inf = INT_MAX / 2;

int is_321(ll num) {
  ll keta = 0;
  ll num2 = num;
  while (num2 != 0) {
    keta++;
    num2 /= 10;
  }
  bool miss[keta - 1];
  for (int i = 0; i < keta - 1; i++) {
    ll now = num % 10;
    ll next = (num / 10) % 10;
    if (!(next > now)) {
      miss[i] = true;
    } else {
      miss[i] = false;
    }
    num /= 10;
  }
  int m = -1;
  for (int i = 0; i < keta - 1; i++) {
    if (miss[i]) {
      m = max(m, i);
    }
  }
  return m;
}

int main() {
  ll k;
  cin >> k;
  ll now = 1;
  ll c = 0;

  while (true) {
    // cout << now << " " << c << endl;

    if (now < 10) {
      c++;
      if (c == k) {
        cout << now << endl;
        return 0;
      }
      now++;
    } else {
      int m = is_321(now);
      if (m == -1) {
        c++;
        if (c == k) {
          cout << now << endl;
          return 0;
        }
        now++;
      } else {
        // now -= now % 10;
        // 10^mを足す
        ll add = 1;
        for (int i = 0; i < m; i++) add *= 10;
        now += add;
      }
    }
  }
  return 0;
}