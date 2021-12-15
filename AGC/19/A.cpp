#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll q[4];
    for(ll i = 0; i < 4; i++) cin >> q[i];
    ll n;
    cin >> n;

    q[0] *= 4;
    q[1] *= 2;

    ll num = 0;
    ll y = q[0];
    for(ll i = 1; i < 3; i++) {
        if(y > q[i]) {
            num = i;
            y = q[i];
        }
    }

    ll ans;
    if(q[num] * 2 < q[3]) {
        ans = q[num] * n;
    } else {
        ll z = n / 2;
        ans = q[3] * z;
        if(n % 2 != 0) ans += q[num];
    }

    cout << ans << endl;


    return 0;
}