#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n, greater<ll>());

    ll ans = a[0];

    for(ll i = 2; i < n; i++) {
        ans += a[i/2];
    }

    cout << ans << endl;

    return 0;
}