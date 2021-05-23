#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[m];
    for(int i = 0; i < m; i++) cin >> a[i];

    int ans = n;

    for(int i = 0; i < m; i++) {
        ans -= a[i];
    }

    if(ans < 0) {
        ans = -1;
    }

    cout << ans << endl;

    return 0;
}