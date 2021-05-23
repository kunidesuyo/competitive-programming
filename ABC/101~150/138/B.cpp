#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    double ans = 0;
    for(int i = 0; i < n; i++) {
        ans += (double)1 / a[i];
    }

    ans = (double)1 / ans;

    printf("%.10f\n", ans);

    return 0;
}