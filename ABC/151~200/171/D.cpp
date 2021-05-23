#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n;
    cin >> n;
    ll a[100001];
    memset(a, 0, sizeof(a));
    ll ans = 0;
    for(ll i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[x]++;
        ans += x;
    }
    ll q;
    cin >> q;
    ll b[q], c[q];
    for(ll i = 0; i < q; i++) cin >> b[i] >> c[i];

    for(ll i = 0; i < q; i++)  {
        ll num = a[b[i]];
        ans += num * (c[i] - b[i]);
        a[c[i]] += a[b[i]];
        a[b[i]] = 0;
        cout << ans << endl;
    }


    return 0;
}