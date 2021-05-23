#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;


int main() {
    ll n;
    cin >> n;

    ll ans = 100;
    for(ll i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            ll num = n / i;
            ll keta = 0;
            while(num > 0) {
                num /= 10;
                keta++;
            }
            ans = min(ans, keta);
        }
    }

    cout << ans << endl;
    

    return 0;
}