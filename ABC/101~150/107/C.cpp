#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int x[n];
    for(int i = 0; i < n; i++) cin >> x[i];

    int ans = 1000000000;

    for(int l = 0; l+k-1 < n; l++) {
        int r = l+k-1;
        int w = abs(x[r] - x[l]);
        ans = min(ans, abs(x[r])+w);
        ans = min(ans, abs(x[l])+w);
    }

    cout << ans << endl;

    return 0;
}