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

    ll ta = 0, tb = 0;
    for(ll i = 0; i < n; i++) {
        ta += a[i];
        tb += b[i];
    }

    if(tb > ta) {
        cout << -1 << endl;
        return 0;
    }

    ll c[n];
    for(ll i = 0; i < n; i++) {
        c[i] = a[i] - b[i];
    }

    ll ans = 0;
    ll val = 0;
    for(ll i = 0; i < n; i++) {
        if(c[i] < 0) {
            ans++;
            val += -c[i];
        }
    }

    vector<ll> v;

    for(ll i = 0; i < n; i++) {
        if(c[i] > 0) {
            v.push_back(c[i]);
        }
    }

    sort(v.begin(), v.end(), greater<ll>());

    for(ll i = 0; i < v.size(); i++) {
        if(val <= 0) break;
        val -= v[i];
        ans++;
    }

    cout << ans << endl;


    return 0;
}