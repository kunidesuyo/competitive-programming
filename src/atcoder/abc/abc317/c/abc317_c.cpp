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
  int n, m;
  cin >> n >> m;
  vector<vector<int>> g(n, vector<int>(n, -1));
  vector<int> a(m);
  vector<int> b(m);
  vector<int> c(m);
  for (int i = 0; i < m; i++) {
    cin >> a[i] >> b[i] >> c[i];
    a[i]--;
    b[i]--;
    g[a[i]][b[i]] = c[i];
    g[b[i]][a[i]] = c[i];
  }
  vector<int> order(n);
  for (int i = 0; i < n; i++) order[i] = i;

  ll ans = -1;
  do {
    ll sum = 0;
    for (int i = 0; i < n - 1; i++) {
      if (g[order[i]][order[i + 1]] == -1) break;
      sum += g[order[i]][order[i + 1]];
    }
    ans = max(ans, sum);
  } while (next_permutation(order.begin(), order.end()));

  cout << ans << endl;
  return 0;
}