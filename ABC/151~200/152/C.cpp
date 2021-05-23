#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int p[n];
    for(int i = 0; i < n; i++) cin >> p[i];

    int small = p[0];
    int ans = 0;

    for(int i = 0; i < n; i++) {
        if(small >= p[i]) {
            ans++;
        }
        small = min(small, p[i]);
    }

    cout << ans << endl;

    return 0;
}