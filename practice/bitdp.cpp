#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()


const int inf = INT_MAX / 2;

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

int n;
int dist[21][21];

int dp[(1<<20)+1][21];
int rec(int bit, int v) {
    if(dp[bit][v] != -1) return dp[bit][v];

    if(bit == (1<<v)) {
        return dp[bit][v] = 0;
    }

    int res = inf;
    int prev_bit = bit & ~(1<<v);

    for(int u = 0; u < n; u++) {
        if(!(prev_bit & (1<<u))) continue;

        chmin(res, rec(prev_bit, u) + dist[u][v]);
    }
    return dp[bit][v] = res;
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> dist[i][j];
        }
    }
    memset(dp, -1, sizeof(dp));

    int ans = inf;
    for(int v = 0; v < n; v++) {
        chmin(ans, rec((1<<n)-1, v));
    }
    cout << ans << endl;

    return 0;
}