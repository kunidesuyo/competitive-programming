#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    ll ans = 0;

    for(int i = 1; i < n; i++) {
        if(a[i-1] > a[i]) {
            ll dai = a[i-1] - a[i];
            a[i] += dai;
            ans += dai;
        }
    }

    cout << ans << endl;

    return 0;
}