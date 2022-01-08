#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll x;
    cin >> x;

    ll keta = 0;
    ll y = x;
    while(y != 0) {
        y /= 10;
        keta += 1LL;
    }
    ll num = 1;
    for(int i = 0; i < keta-1; i++) num *= 10;

    ll ss = x / num;
    ll z;
    ll m = 0;
    ll ans = 1e18;

    for(int s = ss; s < 10; s++) { //10
        m = 0;
        for(ll i = -1; i >= -10; i-=1LL) { //10
            if(s + i * (keta-1) >= 0) {
                m = i;
            } else {
                break;
            }
        }
        for(ll i = m; i <=10; i++) { //20
            //cout << i << endl;
            z = 0;
            ll v = num;
            if(s + i * (keta - 1) >= 10) break;
            for(int j = 0; j < keta; j++) { //18
                ll sss = s + i*j;
                z += sss * v;
                v /= 10;
            }
            if(z >= x) {
                ans = min(ans, z);
            }
        }
    }

    if(ans != 1e18) {
        cout << ans << endl;
        return 0;
    }

    keta += 1LL;

    for(ll i = 0; i < keta; i++) cout << 1;
    cout << "\n";

    return 0;
}