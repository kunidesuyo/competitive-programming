#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

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
    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];

    ll dp[n][n+1];
    memset(dp, 0, sizeof(dp));
    for(ll i = 0; i < n; i++) {
        dp[i][1] = a[i];
    }


    for(ll j = 1; j <= n; j++) {
        for(ll i = 0; i < n; i++) {
            ll l_i = (i+j)%n;
            ll r_i = i-1;
            if(r_i < 0) r_i += n;
            if(j % 2 != 0) {
                if(a[l_i] >= a[r_i]) {
                    chmax(dp[i][j+1], dp[i][j]);
                }
                if(a[l_i] <= a[r_i]) {
                    chmax(dp[r_i][j+1], dp[i][j]);
                }
            } else {
                chmax(dp[i][j+1], dp[i][j] + a[l_i]);
                chmax(dp[r_i][j+1], dp[i][j] + a[r_i]);
            }
        }
    }

    /*for(ll i = 0; i <= n; i++) {
        for(ll j = 0; j < n; j++) {
            cout << dp[j][i] << " ";
        }
        cout << "\n";
    }*/

    ll ans = 0;
    for(ll i = 0; i < n; i++) {
        ans = max(ans, dp[i][n]);
    }
    cout << ans << endl;

    return 0;
}