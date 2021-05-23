#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int h, n;
    cin >> h >> n;
    int a[n+1], b[n+1];
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];

    int dp[n+1][h+1];
    const int inf = 1000000000;
    

    for(int i = 0; i < n+1; i++) {
        for(int j = 0; j < h+1; j++) {
            dp[i][j] = inf;
        }
    }
    dp[0][h] = 0;

    for(int i = 0; i < n; i++) {
        for(int j = h; j >= 0; j--) {
            dp[i+1][j] = min(dp[i+1][j], dp[i][j]);
            dp[i][max(0, j-a[i])] = min(dp[i][max(0, j-a[i])], dp[i][j] + b[i]);
        }
    }

    for(int i = 0; i < n+1; i++) {
        for(int j = 0; j < h+1; j++) {
            if(dp[i][j] == inf) {
                cout << "INF ";
            } else {
                cout << dp[i][j] << " ";
            }
        }
        cout << "\n";
    }
    

    return 0;
}