#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    int ans;

    if(abs(x) > abs(y)) {
        if(x <= 0) {
            ans = abs(abs(y) - abs(x)) + !(y <= 0);
        } else  {
            ans = abs(abs(y) - abs(x)) + 1 + !(y <= 0);
        }
    } else {
        if(x >= 0) {
            ans = abs(abs(y) - abs(x)) + (y < 0);
        } else  {
            ans = abs(abs(y) - abs(x)) + 1 + (y < 0);
        }
    }

    cout << ans << endl;

    return 0;
}