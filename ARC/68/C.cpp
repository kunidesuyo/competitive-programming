#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll x;
    cin >> x;

    if(x <= 6) {
        cout << 1 << endl;
        return 0;
    }

    ll ans = 0;
    ans += (x / 11) * 2;
    x %= 11;

    if(0 < x && x <= 6) {
        ans++;
    } else if(x > 6) {
        ans += 2;
    }

    cout << ans << endl;

    return 0;
}