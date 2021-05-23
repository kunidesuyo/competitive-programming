#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

ll nCr(ll n, ll r) {
    ll ans = 1;
    for (ll i = n; i > n - r; --i) {
        ans = ans*i;
    }
    for (ll i = 1 ; i < r + 1; ++i) {
        ans = ans / i;
    }
    return ans;
}

int main() {
    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];

    vector<ll> amari(200, 0);

    for(ll i = 0; i < n; i++) {
        amari[a[i] % 200]++;
    }

    ll ans = 0;

    for(ll i = 0; i < 200; i++) {
        ans += nCr(amari[i], 2);
    }

    cout << ans << endl;

    return 0;
}