#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

ll mod = 1000000007;

ll powmod(ll x, ll y) {
    ll res = 1;
    for(ll i = 0; i < y; i++) {
        res = res * x % mod;
    }
    return res;
}

int main() {
    ll n;
    cin >> n;

    ll ans;

    ans = powmod(10, n) - powmod(9, n) - powmod(9, n) + powmod(8, n);

    ans %= mod;
    ans = (ans + mod) % mod;

    cout << ans << endl; 

    return 0;
}