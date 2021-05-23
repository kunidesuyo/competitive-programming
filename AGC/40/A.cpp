#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s;
    cin >> s;

    ll n = s.length() + 1;
    ll a[n], b[n];
    ll ans = 0;

    for(ll i = 0; i < n; i++) {
        if(i == 0) {
            a[i] = 0;
            continue;
        }
        if(s[i-1] == '<') {
            a[i] = a[i-1] + 1;
        } else {
            a[i] = 0;
        }
    }
    /*for(ll i = 0; i < n; i++) {
        cout << a[i];
    }
    cout << "\n";
    */
    for(ll i = n - 1; i >= 0; i--) {
        if(i == n - 1) {
            b[i] = 0;
            continue;
        }
        if(s[i] == '>') {
            b[i] = b[i+1] + 1;
        } else {
            b[i] = 0;
        }
    }
    /*for(ll i = 0; i < n; i++) {
        cout << b[i];
    }
    cout << "\n";
    */

   for(ll i = 0; i < n; i++) {
       ans += max(a[i], b[i]);
   }
   cout << ans << endl;

    return 0;
}