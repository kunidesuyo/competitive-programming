// n = 4 ha ok
// ???

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

int main() {
    ll n, d;
    cin >> n >> d;

    /*if(d > 2 * n) {
        cout << 0 << endl;
        return 0;
    }*/

    ll ans = 0;
    for(ll up = 0; up <= d; up++) {
        ll down = d - up;
        if(down > n-1 || up > n-1) continue;
        ll start = modpow(2, n) - 1 - (modpow(2, up) - 1);
        while(start < 0) {
            start += mod;
        }
        if(down > up) {
            ll num = modpow(2, n) - 1;
            while(num < 0){
                num += mod;
            }
            num -= modpow(2, n-(down - up)) - 1;
            while(num < 0) {
                num += mod;
            }
            start -= num;
            while(start < 0) {
                start += mod;
            }
        }
        /*cout << up << " ";
        cout << down << " ";
        cout << start << " ";
        cout << modpow(2, down) << " ";
        cout << "\n";*/
        ans += start * modpow(2, down);
        ans %= mod;
        if(up == down) ans -= start;
        while(ans < 0) {
            ans += mod;
        }
    }
    cout << ans << endl;
    

    return 0;
}