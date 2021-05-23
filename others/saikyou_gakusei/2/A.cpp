#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll x, y, z;
    cin >> x >> y >> z;

    ll ans = 0;

    for(ll i = 1; i < 100000000; i++) {
        if(z* y > i * x) {
            ans = max(ans, i);
        }
    }

    cout << ans << endl;

    return 0;
}