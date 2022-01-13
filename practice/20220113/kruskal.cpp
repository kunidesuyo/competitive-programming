#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

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

struct edge {
    int u, v, cost;
};

bool comp(const edge& e1, const edge& e2) {
    return e1.cost < e2.cost;
}

int main() {
    int v, e;
    cin >> v >> e;
    edge g[e];
    for(int i = 0; i < e; i++) {
        cin >> g[i].u >> g[i].v >> g[i].cost;
    }
    
    sort(g, g+e, comp);
    UnionFind uf;
    uf.init(v);

    int ans = 0;
    for(int i = 0; i < e; i++) {
        edge now = g[i];
        if(!uf.same(g[i].u, g[i].v)) {
            uf.unite(g[i].u, g[i].v);
            ans += g[i].cost;
        }
    }

    cout << ans << endl;


    return 0;
}