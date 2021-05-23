#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;


int main() {
    int n;
    cin >> n;

    double ans = 0;

    for(int i = 1; i <= n-1; i++) {
        ans += (double)n / (n-i);
    }

    printf("%.10f\n", ans);

    return 0;
}