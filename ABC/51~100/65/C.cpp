#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

ll mod = 1000000007;

ll kaijo(ll n) {
    ll val = 1;
    for(ll i = 1; i <= n; i++) {
        val *= i;
        val %= mod;
    }
    return val;
}

int main() {
    ll n, m;
    cin >> n >> m;

    if(abs(n-m) >= 2) {
        cout << 0 << endl;
        return 0;
    }
       
    ll ans = kaijo(n) * kaijo(m) % mod;
    if(n==m) {
        ans *= 2;
        ans %= mod;
    }
    cout << ans << endl;
    

    return 0;
}