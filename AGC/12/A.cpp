#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll n;
    cin >> n;
    ll num = 3 * n;
    ll a[num];
    for(ll i = 0; i < num; i++) cin >> a[i];

    sort(a, a+num, greater<ll>());

    ll ans = 0;
    for(ll i = 0; i < n; i++) {
        ll num2 = 2 * i + 1;
        ans += a[num2];
    }
    cout << ans << endl;

    return 0;
}