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
  ll n, k;
  cin >> n >> k;
  vector<pair<ll, ll>> t;
  ll total = 0;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    total += b;
    t.push_back(make_pair(a, b));
  }
  sort(all(t));

  if (total <= k) {
    cout << 1 << endl;
    return 0;
  }

  for (int i = 0; i < n; i++) {
    pair<int, int> now = t[i];
    total -= now.second;
    if (total <= k) {
      cout << now.first + 1 << endl;
      return 0;
    }
  }
  return 0;
}