#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    ll h[n];
    for(int i = 0; i < n; i++) cin >> h[i];

    sort(h, h+n, greater<int>());

    ll ans = 0;

    for(int i = k; i < n; i++) {
        ans += h[i];
    }

    cout << ans << endl;

    return 0;
}