#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n;
    cin >> n;
    ll a[n], b[n];
    for(ll i = 0; i < n; i++) cin >> a[i] >> b[i];

    ll sa = 0;

    for(ll i = 0; i < n; i++){
        sa += a[i];
    }

    pair<ll, ll> ab[n];
    for(ll i = 0; i < n; i++) {
        ab[i].first = 2 * a[i] + b[i];
        ab[i].second = i;
    }

    sort(ab, ab + n, greater<pair<ll,ll>>());

    ll ans = 0;

    ll i = 0;
    while(true){
        sa -= ab[i].first;
        ans++;
        if(sa < 0) break;
        i++;
    }

    cout << ans << endl;

    return 0;
}