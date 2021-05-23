#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int x[m];
    for(int i = 0; i < m; i++) {
        cin >> x[i];
    }

    if(n >= m) {
        cout << 0 << endl;
        return 0;
    }

    sort(x, x+m);
    int y[m-1];
    int ans = 0;
    for(int i = 0; i < m-1; i++) {
        y[i] = x[i+1] - x[i];
        ans += y[i];
    }
    sort(y, y+m-1, greater<int>());
    for(int i = 0; i < n-1; i++) {
        ans -= y[i];
    }

    cout << ans << endl;

    return 0;
}