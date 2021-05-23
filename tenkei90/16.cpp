#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n;
    cin >> n;
    ll a[3];
    for(ll i = 0; i < 3; i++) cin >> a[i];

    ll ans = 9999;

    for(ll i = 0; i < 10000; i++) {
        for(ll j = 0; j < 10000; j++) {
            ll num = a[0] * i + a[1] * j;
            if(n < num) break;
            if((n-num) % a[2] == 0) {
                ans = min(ans, (n-num)/a[2] + i + j);
            }
        }
    }

    cout << ans << endl;

    return 0;
}