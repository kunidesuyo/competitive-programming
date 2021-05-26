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
    ll n, l;
    cin >> n >> l;
    ll mod = 1000000000 + 7;

    ll dp[n+1];
    for(int i = 0; i <= n; i++) dp[i] = 0;
    dp[0] = 1;
    for(ll i = 1; i <= n; i++) {
        dp[i] += dp[i-1];
        if(i-l >= 0) {
            dp[i] += dp[i-l];
        }            
        dp[i] %= mod;
    }

    cout << dp[n] << endl;
    

    return 0;
}