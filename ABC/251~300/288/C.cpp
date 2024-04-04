#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

class UnionFind {
public:
	vector<int> par;

	void init(int sz) {
		par.resize(sz, -1);
	}
	int root(int pos) {
		if (par[pos] == -1) return pos;
		par[pos] = root(par[pos]);
		return par[pos];
	}
	void unite(int u, int v) {
		u = root(u); v = root(v);
		if (u == v) return;
		par[u] = v;
	}
	bool same(int u, int v) {
		if (root(u) == root(v)) return true;
		return false;
	}
};

int main() {
  int n, m;
  cin >> n >> m;
  UnionFind uf;
  uf.init(n);
  int ans = 0;
  for(int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    u--; v--;
    if(uf.same(u, v)) ans++;
    uf.unite(u, v);
  }
  cout << ans << endl;
  return 0;
}