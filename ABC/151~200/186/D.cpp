#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n, greater<ll>());

    ll b[n];
    b[0] = a[0];
    for(int i = 1; i < n; i++) {
        b[i] = b[i-1] + a[i];
    }

    ll ans = 0;
    for(int i = 0; i < n - 1; i++) {
        ans += (ll)(n - i - 1) * a[i] - (b[n - 1] - b[i]);
    }

    cout << ans << endl;




    return 0;
}