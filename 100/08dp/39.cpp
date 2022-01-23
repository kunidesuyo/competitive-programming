#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    ll dp[n-1][21];
    for(ll i = 0; i < n-1; i++) {
        for(ll j = 0; j < 21; j++) {
            dp[i][j] = 0;
        }
    }

    for(ll i = 0; i < n-1; i++) {
        if(i == 0) {
            dp[i][a[i]] = 1;
            continue;
        }
        for(ll j = 0; j <= 20; j++) {
            ll pm[2] = {1, -1};
            for(ll k = 0; k < 2; k++) {
                ll id = j + pm[k] * a[i];
                if(0<=id && id<=20) {
                    dp[i][id] += dp[i-1][j];
                }
            }
        }
    }

    cout << dp[n-2][a[n-1]] << endl;

    return 0;
}