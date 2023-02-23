#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int dp[1000010][10];


int main() {
    int n;
    cin >> n;
    int mod = 998244353;

    //int dp[n][10];
    for(int i = 1; i <= 9; i++) {
        dp[0][i] = 1;
    }
    for(int i = 1; i < n; i++) {
        for(int j = 1; j <= 9; j++) {
            dp[i][j] = 0;
        }
    }

    for(int i = 1; i < n; i++) {
        for(int j = 1; j <= 9; j++) {
            if(j-1 >= 1) {
                dp[i][j] += dp[i-1][j-1];
                dp[i][j] %= mod;
            }
            dp[i][j] += dp[i-1][j];
            dp[i][j] %= mod;
            if(j+1 <= 9) {
                dp[i][j] += dp[i-1][j+1]; 
                dp[i][j] %= mod;
            }
        }
    }
    int ans = 0;
    for(int i = 1; i <= 9; i++) {
        ans += dp[n-1][i];
        ans %= mod;
    }

    cout << ans << endl;

    return 0;
}