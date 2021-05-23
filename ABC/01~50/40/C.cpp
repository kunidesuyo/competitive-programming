#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

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

using namespace std;

int main() {
    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];

    vector<ll> dp(n, INF);

    dp[0] = 0;

    for(ll i = 1; i < n; i++) {
        chmin(dp[i], dp[i-1] + abs(a[i] - a[i-1]));
        if(i >= 2) chmin(dp[i], dp[i-2] + abs(a[i] - a[i-2]));
    }

    cout << dp[n-1] << endl;

    return 0;
}