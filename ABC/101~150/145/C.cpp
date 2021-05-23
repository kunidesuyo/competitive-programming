#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int x[n], y[n];
    for(int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    double total = 0;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            total += (double)sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2));
        }
    }

    total *= (double)2 / n;

    printf("%.10f\n", total);

    return 0;
}