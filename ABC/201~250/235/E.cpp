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

struct edge {
    int from, to, cost;
    int index;
};

bool comp(edge& e1, edge& e2) {
    return e1.cost < e2.cost;
}


int main() {
    int n, m, q;
    cin >> n >> m >> q;
    edge g[m+q];
    for(int i = 0; i < m; i++) {
        int s, t, w;
        cin >> s >> t >> w;
        g[i].from = s;
        g[i].to = t;
        g[i].cost = w;
        g[i].index = -1;
    }
    for(int i = 0; i < q; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        g[m+i].from = u;
        g[m+i].to = v;
        g[m+i].cost = w;
        g[m+i].index = i;
    }

    sort(g, g+m+q, comp);

    UnionFind uf;
    uf.init(n);

    bool zz = false;

    vector<bool> ans(q, false);

    for(int i = 0; i < m+q; i++) {
        edge x = g[i];
        if(!uf.same(x.from, x.to)) {
            if(x.index == -1) {
                uf.unite(x.from, x.to);
            } else {
                ans[x.index] = true;
            }
        }
    }
    

    for(auto x : ans) {
        if(x) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    

    

    return 0;
}