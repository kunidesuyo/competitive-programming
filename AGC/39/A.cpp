#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s;
    cin >> s;
    ll k;
    cin >> k;

    ll n = s.length();
    ll ans = 0;
    string t = s;

    bool all = true;
    char x = s[0];
    for(int i = 1; i < n; i++) {
        if(x != s[i]) {
            all = false;
            break;
        }
    }

    if(all) {
        cout << n*k/2 << endl;
        return 0;
    }

    for(ll i = 0; i < n-1; i++) {
        if(t[i] == t[i+1]) {
            ans++;
            t[i+1] = '0';
        }
    }

    ans *= k;

    ll a = 0, b = 0;
    char aa, bb;

    for(ll i = 0; i < n; i++) {
        if(i == 0) aa = s[i];
        if(aa == s[i]) {
            a++;
        } else {
            break;
        }
    }

    for(ll i = n-1; i >= 0; i--) {
        if(i == n-1) bb = s[i];
        if(bb == s[i]) {
            b++;
        } else {
            break;
        }
    }

    ll add = 0;
    if(aa == bb) {
        add = a / 2 + b / 2 - (a + b) / 2;
        add *= k-1;
    }

    ans -= add;
    cout << ans << endl;

    return 0;
}