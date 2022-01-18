#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()


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

int main() {
    int n, m;
    cin >> n >> m;
    int v[n+1], w[n+1];
    for(int i = 1; i <= n; i++) cin >> v[i] >> w[i];

    int dp[n+1][m+1];
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= m; j++) {
            dp[i][j] = 0;
        }
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 0; j <= m; j++) {
            if(j - w[i] >= 0) chmax(dp[i][j], dp[i][j-w[i]] + v[i]);
            chmax(dp[i][j], dp[i-1][j]);
        }
    }

    cout << dp[n][m] << endl;

    return 0;
}