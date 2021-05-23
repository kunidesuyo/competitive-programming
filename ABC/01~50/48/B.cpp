#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll a, b, x;
    cin >> a >> b >> x;

    ll ans = b/x - a/x;
    if(a%x == 0) ans++;

    cout << ans << endl;

    return 0;
}