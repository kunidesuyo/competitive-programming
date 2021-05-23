#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n, k;
    cin >> n >> k;

    ll knum = 0;

    for(ll i = 1; i <= n; i++) {
        if(i % k == 0) {
            knum++;
        }
    }

    ll ans = knum*knum*knum;
    knum=0;

    if(k % 2 == 0) {
        for(ll i = 1; i <= n; i++) {
            if(i % k == k/2) {
                knum++;
            }
        }
    }

    ans += knum*knum*knum;
    cout << ans << endl;

    return 0;
}