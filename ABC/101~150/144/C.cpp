#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n;
    cin >> n;

    ll ans = n - 1;

    for(ll i = 2; i <= sqrt(n) + 1; i++) {
        if(n % i == 0) ans = min(ans, i + n / i - 2);
    }

    cout << ans << endl;

    return 0;
}