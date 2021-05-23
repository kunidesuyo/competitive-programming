#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n;
    cin >> n;

    ll ans = 0;

    for(ll i = 1; i*(i+1)/2 <= n; i++) {
        if(i == 1) {
            ans += 2;
            continue;
        }
        ll start = i * (i - 1);
        start /= 2;
        start %= i;
        if(start == 0) start = i;
        ll num = n - start;
        if(num % i == 0) {
            ans += 2;
        }
    }

    cout << ans << endl;

    return 0;
}