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
};

bool comp(edge& e1, edge& e2) {
    return e1.cost < e2.cost;
}



int main() {
    int n;
    cin >> n;
    int x[n], y[n];
    for(int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    tuple<int, int, int> xy[n];
    tuple<int, int, int> yx[n];

    for(int i = 0; i < n; i++) {
        xy[i] = make_tuple(x[i], y[i], i);
        yx[i] = make_tuple(y[i], x[i], i);
    }

    sort(xy, xy+n);
    sort(yx, yx+n);

    edge g[2*(n-1)];

    for(int i = 0; i < n-1; i++) {
        int d = min(abs(get<0>(xy[i]) - get<0>(xy[i+1])), 
                    abs(get<1>(xy[i]) - get<1>(xy[i+1])));
        //cout << get<0>(xy[i]) << endl;
        edge e;
        e.from = get<2>(xy[i]);
        e.to = get<2>(xy[i+1]);
        e.cost = d;
        g[2*i] = e;

        d = min(abs(get<0>(yx[i]) - get<0>(yx[i+1])), 
                abs(get<1>(yx[i]) - get<1>(yx[i+1])));
        e.from = get<2>(yx[i]);
        e.to = get<2>(yx[i+1]);
        e.cost = d;
        g[2*i + 1] = e;
    }

    sort(g, g+2*(n-1), comp);

    UnionFind uf;
    uf.init(n);

    /*for(int i = 0; i < 2*(n-1); i++) {
        cout << g[i].from << " " << g[i].to << " " << g[i].cost << endl;
    }*/

    ll ans = 0;
    for(int i = 0; i < 2*(n-1); i++) {
        edge e = g[i];
        if(!uf.same(e.from, e.to)) {
            ans += e.cost;
            uf.unite(e.from, e.to);
        }
    }

    cout << ans << endl;




    return 0;
}