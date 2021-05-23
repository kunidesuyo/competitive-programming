#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

ll a, b, x;
ll dn;

ll cost(ll n) {
    return a * n + b * dn;
}

ll search(ll lower, ll upper) {
    if(lower >= (ll)pow(10, 9)) {
        return (ll)pow(10, 9);
    }
    ll mid;
    while(upper - lower > 1) {
        mid = (upper + lower) / 2;
        //cout << lower << " "  << mid << " " << upper << endl;
        if(cost(mid) < x) {
            lower = mid;
        } else {
            upper = mid;
        }
    }
    if(cost(upper) <= x) {
        return upper;
    } else {
        return lower;
    }
}


int main() {
    cin >> a >> b >> x;

    dn = 0;
    for(ll i = 1; i < INF; i *= 10) {
        dn++;
        if(cost(i) > x) break;
    }
    dn--;

    //cout << dn << endl;
    ll ans = search((ll)pow(10, dn - 1), (ll)pow(10, dn) - 1);
    cout << ans << endl;

    return 0;
}