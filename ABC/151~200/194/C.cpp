#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];

    ll ans = 0;
    /*for(ll i = 1; i < n; i++) {
        for(ll j = 0; j <= i-1; j++) {
            ans += (a[i] - a[j]) * (a[i] - a[j]);
        }
    }*/

    for(ll i = 0; i < n; i++) {
        ans += a[i] * a[i] * (n-1);
    }

    /*ll c[n-1];
    for(ll i = n-2; i >= 0; i--) {
        if(i == n-2) {
            c[i] = a[n-1];
        } else {
            c[i] = c[i+1] + a[i+1];
        }
    }

    for(ll i = 0; i < n-1; i++) {
        cout << c[i] << endl;
        ans += -2 * a[i] * c[i];
    }*/

    ll t = 0;
    for(ll i = 0; i < n; i++) {
        t += a[i];
    }

    for(ll i = 0; i < n; i++) {
        ans -= a[i] * (t - a[i]);
    }

    cout << ans << endl;

    //cout << ans << endl;

    return 0;
}