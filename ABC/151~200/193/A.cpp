#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    double ans = (double)b / a;
    ans = 1 - ans;
    ans *= 100;

    printf("%.10f\n", ans);

    return 0;
}