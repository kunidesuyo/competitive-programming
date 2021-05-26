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
    ll n;
    cin >> n;
    ll h[n];
    for(ll i = 0; i < n; i++) cin >> h[i];

    ll dp[n+1];
    for(ll i = 0; i < n; i++) dp[i] = INF;
    dp[0] = 0;

    for(ll i = 1; i < n; i++) {
        chmin(dp[i], dp[i-1] + abs(h[i] - h[i-1]));
        if(i > 1) chmin(dp[i], dp[i-2] + abs(h[i] - h[i-2]));
    }

    /*for(ll i = 0; i < n; i++) {
        cout << dp[i] << " ";
    }
    cout << "\n";*/

    cout << dp[n-1] << endl;

    return 0;
}