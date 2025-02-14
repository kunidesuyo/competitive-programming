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
  int n;
  cin >> n;
  set<int> s;
  for (int i = 0; i < n; i++) s.insert(i);
  int q;
  cin >> q;
  vector<set<int>> g(n);
  vector<int> t(n, 0);
  for (int i = 0; i < q; i++) {
    int x;
    cin >> x;
    if (x == 1) {
      int u, v;
      cin >> u >> v;
      u--;
      v--;
      g[u].insert(v);
      g[v].insert(u);
      s.erase(u);
      s.erase(v);
      cout << s.size() << endl;
    } else {
      int v;
      cin >> v;
      v--;
      s.insert(v);
      for (auto gg : g[v]) {
        g[gg].erase(v);
        if (g[gg].size() == 0) {
          s.insert(gg);
        }
      }
      g[v] = set<int>();
      cout << s.size() << endl;
    }
  }

  return 0;
}