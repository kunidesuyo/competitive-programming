#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

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

using namespace std;

int main() {
    int n;
    cin >> n;
    int abc[3][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> abc[j][i];
        }
    }

    int dp[3][n];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < n; j++) {
            dp[i][j] = 0;
        }
    }

    for(int i = 0; i < 3; i++) {
        dp[i][0] = abc[i][0];
    }

    for(int i = 1; i < n; i++) {
        for(int j = 0; j < 3; j++) {
            chmax(dp[j][i], dp[(j+1)%3][i-1] + abc[j][i]);
            chmax(dp[j][i], dp[(j+2)%3][i-1] + abc[j][i]);
        }
    }

    int ans = 0;

    for(int i = 0; i < 3; i++) {
        chmax(ans, dp[i][n-1]);
    }

    cout << ans << endl;

    return 0;
}