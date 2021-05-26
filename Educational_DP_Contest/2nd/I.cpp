#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

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

double dp[3010][3010];

int main() {
    int n;
    cin >> n;
    double p[n];
    for(int i = 0; i < n; i++) cin >> p[i];

    dp[0][0] = 1.0;
    //cout << dp[0][0] << endl;
    

    //dp[i][j] i枚投げてj枚表の確率

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            dp[i+1][j+1] += dp[i][j] * p[i];
            dp[i+1][j] += dp[i][j] * (1.0-p[i]);
            //cout << dp[i][j] << " ";
        }
        //cout << "\n";
    }

    double ans = 0;
    for(int j = n / 2 + 1; j <= n; j++) {
        ans += dp[n][j];
    }
    cout << fixed << setprecision(10) <<  ans << endl;

    return 0;
}