#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int l;
    cin >> l;

    double ans;

    ans = pow((double)l / 3, 3);

    printf("%.12f\n", ans);

    return 0;
}