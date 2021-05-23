#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

ll C(ll n, ll r) {
    ll num = 1;
    for(ll i = 0; i < r; i++) {
        num *= (n-i);
    }
    return num / 2;
}

int main() {
    ll n;
    cin >> n;
    ll a[n];
    ll x[n];
    for(ll i = 0; i < n; i++) x[i] = 0;
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
        x[a[i]-1]++;
    }

    ll num = 0;
    for(ll i = 0; i < n; i++) {
        num += C(x[i], 2);
    }

    for(ll i = 0; i < n; i++) {
        ll ans = num;
        ans -= C(x[a[i]-1], 2);
        ans += C(x[a[i]-1] - 1, 2);
        cout << ans << endl;
    }


    return 0;
}