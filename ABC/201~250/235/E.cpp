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
    int n, m, q;
    cin >> n >> m >> q;
    edge g[m+1];
    for(int i = 0; i < m; i++) {
        int s, t, w;
        cin >> s >> t >> w;
        g[i].from = s;
        g[i].to = t;
        g[i].cost = w;
    }
    int u[q], v[q], w[q];
    for(int i = 0; i < q; i++) {
        cin >> u[i] >> v[i] >> w[i];
    }

    
    int index = m;
    for(int i = 0; i < q; i++) {
        
        edge xx;
        xx.from = u[i];
        xx.to = v[i];
        xx.cost = w[i];
        g[index] = xx;

        sort(g, g+m+1, comp);

        /*cout << i  << " " << index << endl;
        for(auto yy : g) {
            cout << yy.from << " " << yy.to << " " << yy.cost << endl;
        }*/

        UnionFind uf;
        uf.init(n);

        bool zz = false;

        for(int j = 0; j < m; j++) {
            edge x = g[j];
            if(!uf.same(x.from, x.to)) {
                //ans += x.cost;
                uf.unite(x.from, x.to);
                if(x.from == u[i] && x.to == v[i] && x.cost == w[i]) {
                    zz = true;
                }
            }
            if(x.from == u[i] && x.to == v[i] && x.cost == w[i]) {
                index = j;
            }
        }
        

        if(zz) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    

    return 0;
}