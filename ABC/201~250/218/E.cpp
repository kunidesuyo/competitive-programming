#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

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
#define MAX_E 200000

struct edge {
    ll u, v, cost;
};

bool comp(const edge& e1, const edge& e2) {
    return e1.cost < e2.cost;
}

edge es[MAX_E];
ll V, E;

ll kruskal() {
    sort(es, es + E, comp);
    UnionFind uf;
    uf.init(V);
    ll res = 0;
    vector<bool> used(E, false);
    for(ll i = 0; i < E; i++) {
        edge e = es[i];
        if(!uf.same(e.u, e.v)) {
            uf.unite(e.u, e.v);
            res += e.cost;
            used[i] = true;
        }
    }
    for(ll i = 0; i < E; i++) {
        if(used[i] == false && es[i].cost < 0) {
            res += es[i].cost;
        }
    }

    return res;

}

int main() {
    cin >> V >> E;
    ll ans = 0;
    for(ll i = 0; i < E; i++) {
        ll a, b, c;
        cin >> a >> b >> c;
        a--;b--;
        es[i].u = a;
        es[i].v = b;
        es[i].cost = c;
        ans += c;
    }

    ans -= kruskal();
    cout << ans << endl;
    


    return 0;
}