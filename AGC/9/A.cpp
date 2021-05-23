#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n;
    cin >> n; 
    ll a[n], b[n];
    for(ll i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    ll ans = 0;
    ll push = 0;

    for(ll i = n-1; i >= 0; i--) {
        a[i] += push;
        if(a[i] % b[i] != 0) {
            push += b[i] - (a[i] % b[i]);
            ans += b[i] - (a[i] % b[i]);
        }
    }

    cout << ans << endl;

    return 0;
}