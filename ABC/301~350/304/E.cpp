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
  dsu uf(n);
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    u--;
    v--;
    uf.merge(u, v);
  }
  int k;
  cin >> k;
  set<pair<int, int>> st;
  for (int i = 0; i < k; i++) {
    int x, y;
    cin >> x >> y;
    x--;
    y--;
    int idx = uf.leader(x);
    int idy = uf.leader(y);
    if(idx > idy) swap(idx, idy);
    st.insert(pair(idx, idy));
  }

  int qq;
  cin >> qq;
  for (int i = 0; i < qq; i++) {
    int p, q;
    cin >> p >> q;
    p--;
    q--;
    int idp = uf.leader(p);
    int idq = uf.leader(q);
    if(idp > idq) swap(idp, idq);
    if (st.count(pair(idp, idq)) == 1) {
      cout << "No" << "\n";
    } else {
      cout << "Yes" << "\n";
    }
  }

  return 0;
}