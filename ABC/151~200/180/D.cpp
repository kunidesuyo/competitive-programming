#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll x, y, a, b;
    cin >> x >> y >> a >> b;

    ll ans = 0;

     while((double)a * x < 1e18 + 1 && x * a < x + b && a*x < y) {
        x *= a;
        ans++;
     }

     ans += (y - x - 1) / b;

     cout << ans << endl;

    return 0;
}