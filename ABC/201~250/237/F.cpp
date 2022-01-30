#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

ll mod = 998244353;

ll modpow(ll a, ll n) {
    ll res = 1;
    while(n > 0) {
        if(n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;        
    }
    return res;
}

ll modinv(ll a) {
    return modpow(a, mod - 2);
}

ll nCr_mod(ll n, ll r) {
    if(n < r) return 0;
    if(n < 0 || r < 0) return 0;
    // nCr = n! / r!(n-r)!
    // n!/(n-r)! 
    ll val = 1;
    for(ll i = 0; i < r; i++) {
        val *= n - i;
        val %= mod;
    }
    // r!
    ll bunsi = 1;
    for(ll i = 1; i <= r; i++) {
        bunsi *= i;
        bunsi %= mod;
    }
    //  /r! % mod
    val *= modinv(bunsi);
    val %= mod;
    return val;
}

int main() {
    ll n, m;
    cin >> n >> m;

    ll dp[n][m];
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            if(i==0) dp[i][j] = 1;
            else dp[i][j] = 0;
        }
    }
    
    ll ans = nCr_mod(n, 3) * nCr_mod(m, 3);
    ans %= mod;
    for(ll i = 1; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            for(ll k = 0; k <= j; k++) {
                dp[i][j] += dp[i-1][k];
                dp[i][j] %= mod;
            }
        }
    }

    ll num = 0;
    for(ll i = 0; i < m; i++) {
        num += dp[n-1][i];
        num %= mod;
    }

    ans *= num;
    ans %= mod;
    cout << ans << endl;

    return 0;
}