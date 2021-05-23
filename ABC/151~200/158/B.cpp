#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll a, b, n;

    cin >> n >> a >> b;

    ll ans;

    ans = n / (a + b) * a;

    ll c;
    c = n % (a + b);

    if(c > a) {
        ans += a;
    } else {
        ans += c;
    }

    cout << ans << endl;

    return 0;
}