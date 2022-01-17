#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    ll dp[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) dp[i][j] = 0;
            else dp[i][j] = INF;
        }
    }
    for(int i = 0; i < m; i++) {
        int a, b, t;
        cin >> a >> b >> t;
        a--; b--;
        dp[a][b] = t;
        dp[b][a] = t;
    }

    for(int k = 0; k < n; k++) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(dp[i][k] != INF && dp[k][j] != INF) {
                    dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
                }
            }
        }
    }

    /*for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j!=0) cout << " ";
            if(dp[i][j] == INF) cout << "INF"; 
            else cout << dp[i][j];
        }
        cout << "\n";
    }*/



    ll maxi;
    ll ans = INF + 1;
    for(int i = 0; i < n; i++) {
        maxi = -1;
        for(int j = 0; j < n; j++) {
            if(dp[i][j] != INF && i!=j) {
                maxi = max(maxi, dp[i][j]);
            }
        }
        if(maxi == -1) continue;
        ans = min(ans, maxi);
    }
    cout << ans << endl;

    return 0;
}