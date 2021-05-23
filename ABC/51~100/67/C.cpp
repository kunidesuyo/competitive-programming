#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n;
    cin >> n;
    ll total = 0;
    ll c[n];
    for(ll i = 0; i < n; i++) {
        ll a;
        cin >> a;
        if(i == 0) {
            c[i] = a;
        } else {
            c[i] = c[i-1] + a;
        }
        total += a;
    }

    ll ans = INF;

    for(ll i = 0; i < n-1; i++) {
        ans = min(ans, abs(2 * c[i] - total));
    }

    cout << ans << endl;


    return 0;
}