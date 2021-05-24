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
    ll n, w;
    cin >> n >> w;
    ll we[n], va[n];
    for(ll i = 0; i < n; i++) cin >> we[i] >> va[i];

    ll sum_va = 0;
    for(ll i = 0; i < n; i++) sum_va += va[i];

    ll dp[n+1][sum_va+1];

    for(ll i = 0; i <= n; i++) {
        for(ll j = 0; j <= sum_va; j++) {
            dp[i][j] = INF;
        }
    }

    dp[0][0] = 0;


    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j <= sum_va; j++) {
            if(j - va[i] >= 0) {
                chmin(dp[i+1][j], dp[i][j-va[i]] + we[i]);
            }
            chmin(dp[i+1][j], dp[i][j]);
        }
    }

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j <= sum_va; j++) {
            if(dp[i][j] == INF) {
                cout << "INF ";
            } else {
                cout << dp[i][j] << " ";
            }
        }
        cout << "\n";
    }

    ll ans = 0;
    for(ll i = 0; i <= sum_va; i++) {
        if(dp[n][i] <= w) ans = i;
    }

    cout << ans << endl;

    return 0;
}