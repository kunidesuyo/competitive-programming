#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int ans = (1 << 30);
    for(int bit = 0; bit < (1 << (n-1)); bit++) {
        int xored = 0;
        int ored = 0;
        for(int j = 0; j <= n; j++) {
            if(j < n) ored |= a[j];
            if(j == n || (bit >> j & 1)) xored ^= ored, ored = 0;
        }
        ans = min(ans, xored);
    }

    cout << ans << endl;

    return 0;
}