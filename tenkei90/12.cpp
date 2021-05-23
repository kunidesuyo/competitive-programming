#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

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

int h, w, q;

UnionFind uf;
bool used[2009][2009];

int calhash(int x, int y) {
    return (x-1) * w + (y-1);
}

void query1(int px, int py) {
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    for(int i = 0; i < 4; i++) {
        int sx = px + dx[i], sy = py + dy[i];
        if(used[sx][sy] == false) continue;
        int hash1 = calhash(px, py);
        int hash2 = calhash(sx, sy);
        uf.unite(hash1, hash2);
    }
    used[px][py] = true;
}

bool query2(int px, int py, int qx, int qy) {
    if(used[px][py] == false || used[qx][qy] == false) {
        return false;
    }

    int hash1 = calhash(px, py);
    int hash2 = calhash(qx, qy);
    if(uf.same(hash1, hash2) == true) return true;
    return false;
}



int main() {
    cin >> h >> w >> q;
    uf.init(h * w);

    for(int i = 0; i < q; i++) {
        int t;
        cin >> t;
        if(t == 1) {
            int x, y;
            cin >> x >> y;
            query1(x, y);
        } else if(t == 2) {
            int xa, xb, ya, yb;
            cin >> xa >> ya >> xb >> yb;
            bool ans = query2(xa, ya, xb, yb);
            if(ans == true) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }

    return 0;
}