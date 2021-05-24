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
    int n, k;
    cin >> n >> k;
    int h[n];
    for(int i = 0; i < n; i++) cin >> h[i];

    ll dp[n];
    for(int i = 0; i < n; i++) dp[i] = INF;
    dp[0] = 0;

    for(int i = 1; i < n; i++) {
        for(int j = 1; j <= k; j++) {
            if(i - j >= 0) {
                chmin(dp[i], dp[i-j] + abs(h[i] - h[i-j]));
            }
        }
    }

    cout << dp[n-1] << endl;

    return 0;
}