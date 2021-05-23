#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for(ll i = 0 ; i < n; i++) cin >> a[i];

    ll mod = 1000000007;

    ll ans = 0;
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < n; j++) {
            if(a[i] > a[j]) {
                if(i < j) {
                    ans += (k*(k+1)/2) % mod;
                } else {
                    ans += (k*(k-1)/2) % mod;
                }
            }
        }
        ans %= mod;
    }

    cout << ans << endl;

    return 0;
}