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

int main() {
    int h, w;
    cin >> h >> w;
    string a[h];
    for(int i = 0; i < h; i++) cin >> a[i];

    ll mod = 1000000000 + 7;

    ll dp[h][w];
    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            if(i == 0 && j == 0) continue;
            if(a[i][j] == '.') {
                if(i-1 >= 0) dp[i][j] += dp[i-1][j];
                if(j-1 >= 0) dp[i][j] += dp[i][j-1];
                dp[i][j] %= mod;
            }
        }
    }

    cout << dp[h-1][w-1] << endl;

    return 0;
}