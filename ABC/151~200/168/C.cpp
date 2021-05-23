#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int a, b, h, m;
    cin >> a >> b >> h >> m;

    long double s_h, s_m;

    s_h = ((long double)h + (long double)m / 60) / 12 * M_PI * 2;
    s_m = (long double)m / 60 * M_PI * 2;

    //cout << s_h / M_PI << " " << s_m / M_PI << endl;

    long double ans;

    ans = sqrt((long double)a * a + (long double)b * b - (long double)2 * a * b * cos(s_h - s_m));

    printf("%.20Lf\n", ans);

    

    return 0;
}