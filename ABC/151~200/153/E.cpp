#include <bits/stdc++.h>
#include <cmath>

using ll = long long;

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
    int h, n;
    cin >> h >> n;
    int a[n+1], b[n+1];
    for(int i = 1; i <= n; i++) cin >> a[i] >> b[i];

    int dp[n+1][h+1];
    const int inf = 1000000000;
    
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= h; j++) {
            dp[i][j] = inf;
        }
    }
    dp[0][0] = 0;
    

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= h; j++) {
            int nj = max(0, j - a[i+1]);
            /*if(i == 0 && j > 0) {
                cout << i << " " << j << " " << nj << endl;
            }*/
            chmin(dp[i+1][j], dp[i+1][nj] + b[i+1]);
            chmin(dp[i+1][j], dp[i][j]);
        }
    }

    /*for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= h; j++) {
            if(dp[i][j] == inf) cout << "INF ";
            else printf("%3d ", dp[i][j]);
        }
        cout << "\n";
    }*/

    cout << dp[n][h] << endl;
       

    return 0;
}