#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string x;
    cin >> x;
    ll m;
    cin >> m;

    ll n = x.length();

    if(n == 1) {
        if(stoi(x) <= m) cout << 1 << endl;
        else cout << 0 << endl;
        return 0;
    }

    ll d = 0;
    for(ll i = 0; i < n; i++) {
        ll num = x[i] - '0';
        d = max(d, num);
    }

    ll l = d;
    ll r = m + 1;
    while(r - l > 1) {
        ll mid = (l + r) / 2;
        ll val = 0;
        //cout << l << " " << mid <<  " " << r << endl;
        for(ll j = 0; j < n; j++) {
            ll num = x[n-1-j] - '0';
            val += num * pow(mid, j);
        }
        if(m >= val) {
            if(val < 0) {
                r = mid;
            } else {
                l = mid;
            }
        } else {
            r = mid;
        }
    }


    cout << l - d << endl;


    return 0;
}