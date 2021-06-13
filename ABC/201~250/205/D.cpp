#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll n, q;
    cin >> n >> q;
    ll a[n];
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll k[q];
    for(ll i = 0; i < q; i++) cin >> k[i];

    sort(a, a+n);

    for(ll i = 0; i < q; i++) {
        ll s = 0, e = 0;
        ll now = k[i];
        ll plus = 0;
        while(true) {
            now += plus;
            //cout << now << " " << plus << " " << s << " " << e;
            e = upper_bound(a, a+n, now) - a;
            //cout << " " << e << endl;
            plus = e - s;
            if(plus == 0) {
                cout << now << endl;
                break;
            }
            s = e;
        }
    }

    return 0;
}