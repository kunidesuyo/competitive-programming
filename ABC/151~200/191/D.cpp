#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;



int main() {
    long double x, y, r;
    cin >> x >> y >> r;

    long double e = 1e-9;
    //cout << e << endl;

    ll ans = 0ll;
    for(ll i = floor(y+r); i >= ceil(y-r); i--) {
        long double val = sqrt(r * r - (i-y)*(i-y) + e);
        ll l = ceil(x - val);
        ll r = floor(x + val);
        /*cout << i << " " << val << endl;
        cout << l << " " << r << endl;*/
        ans += r - l + 1;
    }

    cout << ans << endl;

    return 0;
}