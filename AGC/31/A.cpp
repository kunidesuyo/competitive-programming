#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

ll mod = 1000000007;

int main() {
    ll n;
    cin >> n;
    string s;
    cin >> s;

    vector<ll> m(26);

    for(ll i = 0; i < n; i++) {
        m[s[i] - 'a']++;
    }

    ll ans = 1;
 
    for(ll i = 0; i < 26; i++) {
        if(m[i] > 0) {
            ans *= m[i]+1;
            ans %= mod;
        }
    }
    ans--;

    cout << ans << endl;


    return 0;
}