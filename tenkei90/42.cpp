#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

ll mod = 1000000000 + 7;



int main() {
    ll k;
    cin >> k;

    if(k % 9 != 0) {
        cout << 0 << endl;
        return 0;
    }

    vector<ll> dp(k+1,0);
    dp[0] = 1;

    for(int i = 1; i <= k; i++) {
        int b = min(i, 9);
        for(int j = 1; j <= b; j++) {
            dp[i] += dp[i-j];
            dp[i] %= mod;
        }
    }



    cout << dp[k] << endl;

    return 0;
}