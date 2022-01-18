#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()



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
    int q;
    cin >> q;

    for(int i = 0; i < q; i++) {
        string x, y;
        cin >> x >> y;

        int xl = x.length();
        int yl = y.length();

        int dp[xl+1][yl+1];
        memset(dp, 0, sizeof(dp));

        for(int i = 1; i <= xl; i++) {
            for(int j = 1; j <= yl; j++) {
                if(x[i-1] == y[j-1]) {
                    dp[i][j] = dp[i-1][j-1] + 1;
                } else {
                    chmax(dp[i][j],dp[i-1][j-1]);
                    chmax(dp[i][j],dp[i][j-1]);
                    chmax(dp[i][j],dp[i-1][j]);
                }
            }
        }
        cout << dp[xl][yl] << endl;
    }

    return 0;
}