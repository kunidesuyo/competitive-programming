#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n, m;
    cin >> n >> m;

    ll total = 1900 * m + 100 * (n-m);

    ll ans = pow(2, m) * total;

    cout << ans << endl;

    return 0;
}