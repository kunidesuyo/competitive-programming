#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n;
    cin >> n;
    string s[n];
    for(ll i = 0; i < n; i++) cin >> s[i];

    ll ans = 1;
    ll x = 2;
    
    for(ll i = 0; i < n; i++) {
        if(s[i] == "AND") {
            ans = ans;
        } else {
            ans += x;
        }
        x *= 2;
    }

    cout << ans << endl;

    return 0;
}