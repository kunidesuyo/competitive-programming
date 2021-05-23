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
    ll start_i;
    if(n % 2 == 0) {
        start_i = 0;
    } else {
        if(a[0] != 0) {
            cout << 0 << endl;
            return 0;
        }
        start_i = 1;
    }

    ll j = 1;

    for(ll i = start_i; i < n; i+=2, j++) {
        bool con = (a[i] == 2*j && a[i+1] == 2*j) 
        || (a[i] == 2*j-1 && a[i+1] == 2*j-1);
        if(!con) {
            cout << 0 << endl;
            return 0;
        }
    }

    ll ans = 1;
    ll mod = 1000000000 + 7;

    for(ll i = 0; i < n/2; i++) {
        ans *= 2;
        ans %= mod;
    }

    cout << ans << endl;

    return 0;
}