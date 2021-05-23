#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n;
    cin >> n;
    ll a[n+1], b[n];
    for(ll i = 0; i < n + 1; i++) cin >> a[i];   
    for(ll i = 0; i < n; i++) cin >> b[i];   
    
    ll ans = 0;

    for(ll i = 0; i < n; i++) {
        if(a[i] < b[i]) {
            b[i] -= a[i];
            ans += a[i];
            a[i] = 0;
            if(a[i + 1] < b[i]) {
                b[i] -= a[i + 1];
                ans += a[i + 1];
                a[i + 1] = 0;
            } else {
                ans += b[i];
                a[i + 1] -= b[i];
            }
        } else {
            ans += b[i];
            a[i] -= b[i];
        }
    }

    cout << ans << endl;

    return 0;
}