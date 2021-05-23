#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int ans = 0;

    while(n > 0) {
        int a = n % k;
        n -= a;
        n /= k;
        ans++;
    }

    cout << ans << endl;

    return 0;
}