#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    long double x0, y0, xn2, yn2;
    cin >> x0 >> y0;
    cin >> xn2 >> yn2;
    cout << setprecision(15);

    long double angle = (long double)2 * M_PI / n;
    long double midx = (xn2 + x0) / 2;
    long double midy = (yn2 + y0) / 2;
    long double vec_m0x = x0 - midx;
    long double vec_m0y = y0 - midy;
    long double len_m0 = sqrt(pow(x0 - midx, 2) + pow(y0 - midy, 2));
    long double theta  = atan2(vec_m0y, vec_m0x);

    long double ans[2];
    ans[0] = midx + len_m0 * cos(theta + angle);
    ans[1] = midy + len_m0 * sin(theta + angle);

    //printf("%.10f %.10f\n", ans[0], ans[1]);
    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}