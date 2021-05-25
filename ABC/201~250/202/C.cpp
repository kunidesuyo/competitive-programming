#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n+1, 0);
    vector<ll> b(n+1, 0);
    for(ll i = 0; i < n; i++) {
        ll aa;
        cin >> aa;
        a[aa]++;
    }
    ll bb[n], c[n];
    for(ll i = 0; i < n; i++) {
        cin >> bb[i];
    }
    for(ll i = 0; i < n; i++) {
        cin >> c[i];
    }

    for(ll i = 0; i < n; i++) {
        ll index = bb[c[i]-1];
        b[index]++;
    }

    ll ans = 0;
    for(ll i = 1; i <= n; i++) {
        ans += a[i] * b[i];
    }
    cout << ans << endl;

    return 0;
}