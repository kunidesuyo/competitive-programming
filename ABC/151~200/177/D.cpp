#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

struct UnionFind {
    //自身が親であれば、その集合に属する頂点数に-1を掛けたもの
    //そうでなければ親のid
    vector<int> r;

    UnionFind(int N) {
        r = vector<int>(N, -1);
    }

    int root(int x) {
        if(r[x] < 0) return x;
        return r[x] = root(r[x]);
    }

    bool unite(int x, int y) {
        x = root(x);
        y = root(y);
        if(x == y) return false;
        if(r[x] > r[y]) swap(x, y);
        r[x] += r[y];
        r[y] = x;
        return true;
    }    

    int size(int x) {
        return -r[root(x)];
    }

    void print(void) {
        for(int i = 0; i < r.size(); i++) {
            cout << r[i] << " ";
        }
        cout << "\n";
        return;
    }
};

int main() {
    int n, m;
    cin >> n >> m;
    
    UnionFind friends(n);
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a -= 1;
        b -= 1;
        friends.unite(a, b);
    }

    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans = max(ans, friends.size(i));
    }

    cout << ans << endl;

    return 0;
}