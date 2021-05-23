#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;

    int ans = -1000;

    for(int i = a; i <= b; i++) {
        for(int j = c; j <= c; j++) {
            ans = max(ans, i-j);
        }
    }

    cout << ans << endl;

    return 0;
}