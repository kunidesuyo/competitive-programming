#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n;
    cin >> n;
    //ll a[n], b[n], c[n];
    ll a[46], b[46], c[46];
    for(ll i = 0; i < 46; i++) {
        a[i] = 0;
        b[i] = 0;
        c[i] = 0;
    }
    for(ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        a[x%46]++;
    }
    for(ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        b[x%46]++;
    }for(ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        c[x%46]++;
    }

    ll ans = 0;
    for(ll i = 0; i < 46; i++) {
        for(ll j = 0; j < 46; j++) {
            for(ll k = 0; k < 46; k++) {
                if(a[i] > 0 && b[j] > 0 && c[k] > 0) {
                    if((i+j+k)%46 == 0) {
                        ans += a[i]*b[j]*c[k];
                    }
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}