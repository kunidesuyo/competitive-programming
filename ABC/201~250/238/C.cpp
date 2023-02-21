#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

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

ll tousa(ll head, ll tail) {
    ll num = tail - head + 1;
    num %= mod;
    ll ret = head + tail;
    ret %= mod;
    ret = ret * num;
    ret %= mod;
    // ret/2 % mod
    ret *= modinv(2);
    ret %= mod;
    return ret;
}

int main() {
    ll n;
    cin >> n;
    ll ans = 0;

    for(int i = 0; i <= 17; i++) {
        ll now = pow(10, i);
        ll next = now * 10;
        if(now <= n && n < next) {
            ans += tousa(1, n-now+1);
            break;
        } else {
            ans += tousa(1, next-now);
        }
        ans %= mod;
        //cout << i << " " << ans << endl;
    }
    ans %= mod;

    cout << ans << endl;

    return 0;
}
