#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int v[n], c[n];
    for(int i = 0; i < n; i++) cin >> v[i];
    for(int i = 0; i < n; i++) cin >> c[i];

    int ans = 0;

    for(int bit = 0; bit < (1<<n); bit++) {
        int total = 0;
        for(int i = 0; i < n; i++) {
            if(bit & (1<<i)) {
                total += v[i] - c[i];
            }
        }
        ans = max(ans, total);
    }

    cout << ans << endl;

    return 0;
}