#include <bits/stdc++.h>

#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;
const ll INF = 1LL << 60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int w, h;
  cin >> w >> h;
  int n;
  cin >> n;
  vector<int> p(n), q(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i] >> q[i];
  }

  int na, nb;
  cin >> na;
  vector<int> a(na);
  for (int i = 0; i < na; i++) cin >> a[i];

  cin >> nb;
  vector<int> b(nb);
  for (int i = 0; i < nb; i++) cin >> b[i];

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  map<pair<int, int>, int> mp;
  for (int i = 0; i < n; i++) {
    int x = lower_bound(a.begin(), a.end(), p[i]) - a.begin();
    int y = lower_bound(b.begin(), b.end(), q[i]) - b.begin();
    mp[{x, y}]++;
  }
  int m = n, M = 0;
  for (auto t : mp) {
    m = min(m, t.second);
    M = max(M, t.second);
  }
  if ((ll)mp.size() < (ll)(na + 1) * (nb + 1)) m = 0;
  printf("%d %d \n", m, M);

  return 0;
}