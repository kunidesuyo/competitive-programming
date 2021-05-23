#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;
using ld = long double;

using namespace std;

int main() {
    ld t, l, x, y;
    int q;
    cin >> t >> l >> x >> y;
    cin >> q;
    ld e[q];
    for(int i = 0; i < q; i++) cin >> e[i];

    cout << setprecision(10);

    for(int i = 0; i < q; i++) {
        ld theta = M_PI * (-0.5 - 2*e[i]/t);
        //cout << e[i] << " " << theta << endl;
        ld ez = l/2 + l/2*sin(theta);
        ld ey = l/2*cos(theta);
        //cout << ez << " " << ey << endl;
        ld p = ez / sqrt(x*x + (y-ey) * (y-ey));
        cout << atan(p) / (2*M_PI) * 360 << endl;
    }


    return 0;
}