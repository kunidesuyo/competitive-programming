#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int w, h, x, y;
    cin >> w >> h >> x >> y;

    double ans = (double)w * h / 2;
    printf("%.10f ", ans);

    int ans2 = 0;

    if(w == 2 * x && h == 2 * y) ans2 = 1;
    cout << ans2 << endl;

    return 0;
}