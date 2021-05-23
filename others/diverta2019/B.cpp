#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int r, g, b, n;
    cin >> r >> g >> b >> n;

    int ans = 0;
    for(int i = 0; r * i <= n; i++) {
        for(int j = 0; g * j + r * i <= n; j++) {
            if((n - r*i - g*j) % b == 0) ans++;
        }
    }
    cout << ans << endl;

    return 0;
}