#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll h, w;
    cin >> h >> w;

    ll ans = 0;

    if(h == 1 || w == 1) {
        cout << 1 << endl;
        return 0;
    }

    ans += w * (h/2);
    if(h % 2 != 0) {
        ans += w/2;
        if(w % 2 != 0) ans++;
    }

    cout << ans << endl;

    return 0;
}