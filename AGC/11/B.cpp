#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    ll b[n];
    b[0] = a[0];
    for(ll i = 1; i < n; i++) b[i] = b[i-1] + a[i];

    ll t = 0;

    for(ll i = 0; i < n-1; i++) {
        if(2 * b[i] < a[i+1]) {
            t = i+1;
        }
    }

    cout << n - t << endl;

    return 0;
}