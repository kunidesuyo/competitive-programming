#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n;
    cin >> n;

    ll ans = 0;

    for(ll i = 1; i <= n; i++) {
        if(i % 3 != 0 && i % 5 != 0) ans += i;
    }

    cout << ans << endl;

    return 0;
}