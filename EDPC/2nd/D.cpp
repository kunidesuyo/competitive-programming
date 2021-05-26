#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

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
    ll n, W;
    cin >> n >> W;
    ll w[n+1], v[n+1];
    for(ll i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
    }

    ll dp[n+1][W+1];

    for(ll i = 0; i <= n; i++) {
        for(ll j = 0; j <= W; j++) {
            dp[i][j] = 0;
        }
    }

    for(ll i = 1; i <= n; i++) {
        for(ll j = 0; j <= W; j++) {
            if(j - w[i] >= 0) {
                chmax(dp[i][j], dp[i-1][j - w[i]] + v[i]);
            }
            chmax(dp[i][j], dp[i-1][j]);
        }
    }

    cout << dp[n][W] << endl;

    return 0;
}