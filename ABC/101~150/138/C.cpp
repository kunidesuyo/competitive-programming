#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int v[n];
    for(int i = 0; i < n; i++) cin >> v[i];

    double ans = 0;
    sort(v, v + n);

    ans = (double)v[0];

    for(int i = 1; i < n; i++) {
        ans = (ans + (double)v[i]) / 2;
    }

    printf("%.10f\n", ans);

    return 0;
}