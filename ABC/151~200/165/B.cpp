#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    unsigned long long x;
    cin >> x;

    unsigned long long ans = 0;
    unsigned long long m = 100;

    while(x > m) {
        m += m / 100;
        ans++;
    }

    cout << ans << endl;

    return 0;
}