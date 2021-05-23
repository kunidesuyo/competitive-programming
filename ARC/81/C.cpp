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
    sort(a, a+n, greater<ll>());

    ll x = 0, y = 0;

    for(ll i = 0; i < n-1; i++) {
        if(x == 0) { 
            if(a[i] == a[i+1]) {
                x = a[i];
                i++;
            }
        } else {
            if(a[i] == a[i+1]) {
                y = a[i];
            }
        }
        if(y>0) break;
    }

    cout << x * y << endl;

    return 0;
}