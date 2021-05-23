#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int a, b, c, k;
    cin >> a >> b >> c >> k;

    int ans = 0;

    if(a > k) {
        ans = k;
    } else {
        ans += a;
        k -=a;
        if(b > k) {
            cout << ans << endl;
            return 0;
        } else {
            k -= b;
            ans -= k;
        }
    }

    cout << ans << endl;

    return 0;
}