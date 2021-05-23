#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n;
    cin >> n;
    ll a[n], b[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++) cin >> b[i];

    sort(a, a+n);
    sort(b, b+n);

    ll ans = 0;
    for(ll i = 0; i < n; i++) {
        ans += abs(a[i] - b[i]);
    }

    cout << ans << endl;

    return 0;
}