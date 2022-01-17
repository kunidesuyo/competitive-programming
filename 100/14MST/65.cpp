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
    int from, to, cost;
};

bool comp(edge& e1, edge& e2) {
    return e1.cost < e2.cost;
}


int main() {
    int n, m, k;
    cin >> n >> m >> k;
    edge g[m];
    for(int i = 0; i < m; i++) {
        int s, t, w;
        cin >> s >> t >> w;
        s--; t--;
        g[i].from = s;
        g[i].to = t;
        g[i].cost = w;
    }

    sort(g, g+m, comp);

    UnionFind uf;
    uf.init(n);

    int ans = 0;
    int i = 0;
    int cnt = 0;
    while(cnt < n-k) {
        edge x = g[i];
        if(!uf.same(x.from, x.to)) {
            ans += x.cost;
            uf.unite(x.from, x.to);
            cnt++;
        }
        i++;
    }

    cout << ans << endl;
    

    return 0;
}