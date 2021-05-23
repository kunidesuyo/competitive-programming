#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, x, t;
    cin >> n >> x >> t;

    int ans;

    if(n % x == 0) {
        ans = n / x * t;
    } else {
        ans = (n / x + 1) * t;
    }


    cout << ans << endl;

    return 0;
}