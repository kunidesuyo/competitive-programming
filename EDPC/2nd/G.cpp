#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
    }
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

int n, m;
vector<vector<int>> g;

int dp[100010];

int rec(int v) {
    if(dp[v] != -1) return dp[v];

    int res = 0;
    for(auto nv : g[v]) {
        chmax(res, rec(nv) + 1);
    }
    return dp[v] = res;
}

int main() {
    cin >> n >> m;
    g.assign(n, vector<int>());
    //gの長さをnにする
    for(int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        x--; y--;
        g[x].push_back(y);
    }

    for(int v = 0; v < n; v++) dp[v] = -1;

    int ans = 0;
    for(int v = 0; v < n; v++) chmax(ans, rec(v));
    cout << ans << endl;

    return 0;
}