#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()



using namespace std;

int w[310];
int dp[310][310];


int solve(int l, int r) {
    if(dp[l][r] != -1) return dp[l][r];
    if(l+1 == r) {
        if(abs(w[l] - w[r]) <= 1) return dp[l][r] = 2;
        return dp[l][r] = 0;
    }
    if(l == r) return 0;

    int val = 0;
    if(abs(w[l] - w[r]) <= 1 && solve(l+1, r-1) == r-l-1) {
        val = r-l+1;
    }
    for(int mid = l; mid+1 <= r; mid++) {
        val = max(val, solve(l, mid) + solve(mid+1, r));
    }
    return dp[l][r] = val;

}

int main() {
    while(true) {
        int n;
        cin >> n;
        if(n==0) break;
        for(int i = 0; i < n; i++) cin >> w[i];
        memset(dp, -1, sizeof(dp));
        int ans = solve(0, n-1);
        /*for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << dp[i][j] << " ";
            }
            cout << "\n";
        }*/
        cout << ans << endl;
    }
    return 0;
}