#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

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

ll nPr(ll n, ll k) {
    ll val = 1;
    for(int i = 0; i < k; i++) {
        val *= n;
        val %= mod;
        n--;
    }
    return val;
}

int main() {
    ll n, k;
    cin >> n >> k;

    if(k == 1) {
        if(n == 1) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
        return 0;
    }

    if(k == 2) {
        if(n <= 2) {
            cout << 2 << endl;
        } else {
            cout << 0 << endl;
        }
        return 0;
    }

    if(n <= 3) {
        cout << nPr(k, n) << endl;
        return 0;
    }

    ll ans = nPr(k, 3);
    ans *= modpow(k-2, n-3);
    ans %= mod;
    cout << ans << endl;    


    return 0;
}