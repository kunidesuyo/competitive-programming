#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>
#include <stdio.h>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;

    double ans;

    ans = ( c * b + a * d ) / (b + d);

    printf("%.10f\n", ans);

    return 0;
}