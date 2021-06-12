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
    int a[n], b[n];
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];

    int dp[n][h+1];
    const int inf = 1000000000;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= h; j++) {
            dp[i][j] = inf;
        }
    }
    for(int i = 0; i < n; i++) {
        dp[i][0] = 0;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= h; j++) {
            if(j - a[i+1] >= 0) chmin(dp[i+1][j], dp[i][j-a[i+1]] + b[i+1]);
            chmin(dp[i+1][j], dp[i][j]);
        }
    }

    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= h; j++) {
            if(dp[i][j] == inf) cout << "INF ";
            else printf("%3d ", dp[i][j]);
        }
        cout << "\n";
    }

    cout << dp[n][h] << endl;
       

    return 0;
}