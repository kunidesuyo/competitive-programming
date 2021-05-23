#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

ll nCr(ll n, ll k) {
    ll r = 1;
    for (ll d = 1; d <= k; ++d) {
        r *= n--;
        r /= d;
    }
    return r;
}

int main() {
    ll n;
    cin >> n;
    map<string, ll> m;
    for(ll i = 0; i < n; i++) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        m[s]++;
    }

    ll ans = 0;

    for(auto i = m.begin(); i != m.end(); i++) {
        if(i->second >= 2) {
            ans += nCr(i->second, 2);
        }
    }

    cout << ans << endl;
    

    return 0;
}