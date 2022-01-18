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

int main() {
    int n, m;
    cin >> n >> m;
    int c[m+1];
    for(int i = 1; i <= m; i++) cin >> c[i];

    int dp[m+1][n+1];
    for(int i = 0; i <= m; i++) {
        for(int j = 0; j <= n; j++) {
            dp[i][j] = inf;
        }
    }
    for(int i = 0; i <= m; i++) {
        dp[i][0] = 0;
    }

    /*for(int j = 0; j <= m; j++) {
        for(int k = 0; k <= n; k++) {
            if(dp[j][k] == inf) cout << "INF";
            else cout << dp[j][k];
        }
        cout << "\n";
    }*/

    for(int i = 1; i <= m; i++) {
        for(int j = 0; j <= n; j++) {
            if(j - c[i] >= 0) chmin(dp[i][j], dp[i][j-c[i]] + 1);
            chmin(dp[i][j], dp[i-1][j]);
        }
        /*for(int j = 0; j <= m; j++) {
            for(int k = 0; k <= n; k++) {
                if(dp[j][k] == inf) cout << "INF";
                else cout << dp[j][k];
            }
            cout << "\n";
        }*/
    }

    cout << dp[m][n] << endl;
    return 0;
}