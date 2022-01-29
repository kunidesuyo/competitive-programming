#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll n;
    cin >> n;
    ll a[n], b[n];
    for(ll i = 0; i < n; i++) cin >> a[i];   
    for(ll i = 0; i < n; i++) cin >> b[i];



    ll dp[n][3001];
    ll mod = 998244353;

    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j <= 3000; j++) {
            dp[i][j] = 0;
        }
    }

    ll r[3002];
    ll s, t;
    r[0] = 0;
    for(ll i = 0; i < n; i++) {
        for(ll j = a[i]; j <= b[i]; j++) {
            if(i==0) {
                if(j == a[i]) {
                    dp[i][j] = 1;
                } else {
                    dp[i][j] = dp[i][j-1] + 1;
                }
            } else {
                if(j == a[i]) {
                    dp[i][j] = dp[i-1][min(j, b[i-1])];
                } else {
                    dp[i][j] = dp[i][j-1] + dp[i-1][min(j, b[i-1])];
                    dp[i][j] %= mod;
                }
            }
        }
        /*s = a[i];
        t = b[i];
        if(s-1 >= 0) r[s-1] = 0;
        for(ll j = s; j <= t; j++) {
            if(j == 0) {
                r[j] = dp[i][j];
                continue;
            }
            r[j] = r[j-1] + dp[i][j];
            r[j] %= mod;
        }*/
    }

    /*for(ll i = 0; i < n; i++) {
        for(ll j = 1; j <= b[n-1]; j++) {
            cout << dp[i][j] << " ";
        }
        cout << "\n";
    }*/

    /*ll ans = 0;
    for(ll i = 0; i <= 3000; i++) {
        ans += dp[n-1][i];
    }*/
    cout << dp[n-1][b[n-1]] << endl;

    return 0;
}