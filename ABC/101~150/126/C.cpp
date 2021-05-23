#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    double ans = 0;

    for(int i = 1; i <= n; i++) {
        int t = 0;
        int x = i;
        while(k > x) {
            x *= 2;
            t++;
        }
        ans += (double)1 / n / pow(2, t);
    }

    printf("%.10f\n", ans);

    return 0;
}