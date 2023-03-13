#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int mod = 998244353;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    int dp[n+1][k+1];

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= k; j++) {
            if(i == 1) {
                if(j <= m) {
                    dp[i][j] = 1;
                } else {
                    dp[i][j] = 0;
                }
            } else {
                dp[i][j] = 0;
                for(int p = max(1, j-m); p <= j-1; p++) {
                    dp[i][j] += dp[i-1][p];
                    dp[i][j] %= mod;
                }
            }
        }
    }
    int ans = 0;
    for(int i = 1; i <= k; i++) {
        ans += dp[n][i];
        ans %= mod;
    }
    cout << ans << endl;

    return 0;
}