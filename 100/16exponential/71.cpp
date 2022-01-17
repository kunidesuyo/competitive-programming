#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;

using namespace std;

ll mod = 1000000000 + 7;

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
    ll val = 1;
    for(ll i = 0; i < r; i++) {
        val *= n - i;
        val %= mod;
    }
    ll bunsi = 1;
    for(ll i = 1; i <= r; i++) {
        bunsi *= i;
        bunsi %= mod;
    }
    val *= modinv(bunsi);
    val %= mod;
    return val;
}

int main() {
    ll n, q;
    cin >> n >> q;
    ll a[n], c[q+2];
    c[0] = 0;
    c[q+1] = 0;
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(ll i = 1; i <= q; i++) {
        cin >> c[i];
        c[i]--;
    }

    ll forward[n];
    forward[0] = 0;


    for(ll i = 0; i < n-1; i++) {
        forward[i+1] = forward[i] + modpow(a[i], a[i+1]);
        forward[i+1] %= mod;
    }

    //for(auto x: forward) cout << x << endl;
    
    ll ans = 0;
    for(ll i = 0; i < q+1; i++) {
        //i -> i+1
        if(c[i+1] > c[i]) {
            ll d = forward[c[i+1]] - forward[c[i]];
            if(d < 0) d += mod;
            ans += d;
        } else {
            ll d = forward[c[i]] - forward[c[i+1]];
            if(d < 0) d += mod;
            ans += d;
        }
        ans %= mod;
    }

    cout << ans << endl;

    

    return 0;
}