#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n;
    cin >> n;
    if(n%2 != 0) {
        cout << 0 << endl;
        return 0;
    }

    ll ans = 0;
    for(ll i = 1; n >= pow(5, i); i++) {
        ll num = 2 * pow(5, i);
        ans += n / num;
    }

    cout << ans << endl;
 
    return 0;
}