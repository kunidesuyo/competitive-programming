#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;



int main() {
    ll n, m;
    cin >> n >> m;

    vector<bool> stair(n+1, true);

    for(int i = 0; i < m; i++) {
        int a;
        cin >> a;
        stair[a] = false;
    }

    ll mod = 1000000007;

    /*if(n == 1) {
        cout << 1 << endl;
        return 0;
    }*/

    ll dp[n+1];
    dp[0] = 1;

    for(ll i = 1; i <= n; i++) {
        if(stair[i] == false) {
            dp[i] = 0;
        } else {
            if(i == 1) {
                dp[i] = 1;
            } else {
                dp[i] = dp[i-1] + dp[i-2];
            }
        }
        dp[i] %= mod;
        //cout << dp[i] << endl;
    }

    cout << dp[n] << endl;

    return 0;
}