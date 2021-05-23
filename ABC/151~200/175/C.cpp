#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll x, k, d;
    cin >> x >> k >> d;

    ll ans;

    if(x == 0) {
        if(k % 2 == 0) {
            ans = 0;
        } else {
            ans = abs(d);
        }
        cout << ans << endl;
        return 0;
    }

    if(abs(x) / d >= k) {
        if(x < 0) {
            ans = abs(x + k * d);
        } else {
            ans = abs(x - k * d);
        }
    } else {
        ll step = abs(x) / d;
        if((k - step) % 2 == 0) {
            if(x < 0) {
                ans = abs(x + step * d);
            } else {
                ans = abs(x - step * d);
            }
        } else {
            if(x < 0) {
                ans = abs(x + (step + 1) * d);
            } else {
                ans = abs(x - (step + 1) * d);
            }
        }
    }

    cout << ans << endl;

    return 0;
}