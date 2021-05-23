#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int a, b, x;
    cin >> a >> b >> x;

    double val;
    double sankaku = (double)a * a * b / 2;

    if(sankaku <= x) {
        val = (double)2 * b / a;
        val -= (double)2 * x / a / a / a;
    } else {
        val = (double) a * b * b / 2 / x;
    }

    double ans = atan(val);
    ans /= 2 * M_PI;
    ans *= 360;

    printf("%.10f\n", ans);

    return 0;
}