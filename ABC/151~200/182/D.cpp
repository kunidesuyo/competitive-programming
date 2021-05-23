#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n;
    cin >> n;
    ll a[n], b[n][2];
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
        if(i == 0) {
            b[0][0] = a[0];
            b[0][1] = a[0];
        } else {
            b[i][0] = b[i-1][0] + a[i];
            b[i][1] = max(b[i-1][1], b[i][0]);
        }
    }

    ll ans = 0;
    ll robo = 0;
    for(int i = 0; i < n; i++) {
        ans = max(ans, robo + b[i][1]);
        robo += b[i][0];
    }

    cout << ans << endl;


    return 0;
}