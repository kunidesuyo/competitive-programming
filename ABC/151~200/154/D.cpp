#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int p[n];
    for(int i = 0; i < n; i++) cin >> p[i];

    int pattern = n - k + 1;
    double ans = 0;
    double val = 0;

    for(int i = 0; i < pattern; i++) {
        if(i == 0) {
            for(int j = i; j < i + k; j++) {
                val += (double)(1+p[j]) * p[j] / 2 / p[j];
            }
        } else {
            val -= (double)(1+p[i-1]) * p[i-1] / 2 / p[i-1];
            val += (double)(1+p[k+i-1]) * p[k+i-1] / 2 / p[k+i-1];
        }
        ans = max(ans, val);
    }

    printf("%.10f\n", ans);

    return 0;
}