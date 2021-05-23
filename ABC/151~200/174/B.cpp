#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    ll d;
    cin >> n >> d;
    ll x[n], y[n];
    for(int i = 0; i < n; i++) cin >> x[i] >> y[i];

    int ans = 0;

    for(int i = 0; i < n; i++) {
        if(sqrt(x[i] * x[i] + y[i] * y[i]) <= d) ans++;
    }

    cout << ans << endl;

    return 0;
}