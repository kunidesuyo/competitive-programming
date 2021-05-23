#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll l, r;
    cin >> l >> r;



    ll mod = 2019;
    if(r - l >= mod) {
        cout << 0 << endl;
        return 0;
    }

    ll upper = r % mod;
    ll lower = l % mod;

    if(upper < lower) {
        cout << 0 << endl;
        return 0;
    }

    ll ans = mod*2;


    for(ll i = lower; i <= upper-1; i++) {
        for(ll j = i+1; j <= upper; j++) {
            ans = min(ans, (i*j)%mod);
        }
    }

    cout << ans << endl;

    return 0;
}