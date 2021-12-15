#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll a[3];
    for(ll i = 0; i < 3; i++) cin >> a[i];

    ll ans = a[0] * a[1] * a[2];
    for(ll i = 0; i < 3; i++) {
        if(a[i] % 2 == 0) {
            ans = 0;
            break;
        }
        ll m = 1;
        for(ll j = 0; j < 3; j++) {
            if(j != i) {
                m *= a[j];
            }
        }
        ans = min(ans, m);
    }
    cout << ans << endl;

    return 0;
}