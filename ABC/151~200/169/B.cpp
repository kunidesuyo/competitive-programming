#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < n; i++) {
        if(a[i] == 0) {
            cout << 0 << endl;
            return 0;
        }
    }

    ll max = 1;
    for(int i = 0; i < 18; i++) {
        max *= 10;
    }

    ll ans = 1;
    for(int i = 0;i < n; i++) {
        if(ans <= max / a[i]) {
            ans *= a[i];
        } else {
            ans = -1;
            break;
        }
    }


    cout << ans << endl;

    return 0;
}