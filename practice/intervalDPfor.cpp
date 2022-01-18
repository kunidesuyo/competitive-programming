#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()


using namespace std;

int main() {
    int w[310];
    int dp[310][310];
    while(true) {
        int n;
        cin >> n;
        if(n == 0) break;
        for(int i = 0; i < n; i++) cin >> w[i];
        memset(dp, 0, sizeof(dp));
        for(int h = 2; h <= n; h++) {
            for(int l = 0; l < n; l++) {
                int r = l+h;
                if(r>n) continue;
                if(dp[l+1][r-1] == h-2 && abs(w[l] - w[r-1]) <= 1) {
                    dp[l][r] = h;
                }
                for(int mid = l; mid <= r; mid++) {
                    dp[l][r] = max(dp[l][r], dp[l][mid] + dp[mid][r]);
                }
            }
        }
        cout << dp[0][n] << endl;
    }

    return 0;
}