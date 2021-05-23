#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n, p;
    cin >> n >> p;

    vector<pair<ll, ll>> res;
    for(ll a = 2; a * a <= p; a++) {
        if(p % a != 0) continue;
        ll ex = 0;
        while(p % a == 0) {
            ex++;
            p /= a;
        }
        res.push_back({a, ex});
    }
    if(p != 1) res.push_back({p, 1});
    
    ll ans = 1;

    for(auto s : res) {
        //cout << s.first << " " << s.second << endl;
        ans *= pow(s.first, s.second / n);
        //cout << ans << endl;
    }

    cout << ans << endl;

    return 0;
}