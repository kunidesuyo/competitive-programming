#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int n;
    cin >> n;

    int dp[n+1];
    for(int i = 0; i < n+1; i++) {
        dp[i] = inf;
    }
    dp[0] = 0;

    for(int i = 0; i <=n; i++) {
        // 1
        if(i+1 > n) continue;
        dp[i+1] = min(dp[i+1], dp[i]+1);
        for(int m = 6; i+m <= n; m*=6) {
            if(i+m > n) break;
            dp[i+m] = min(dp[i+m], dp[i]+1);
        }
        for(int m = 9; i+m <= n; m*=9) {
            if(i+m > n) break;
            dp[i+m] = min(dp[i+m], dp[i]+1);
        }
    }

    cout << dp[n] << endl;

    return 0;
}