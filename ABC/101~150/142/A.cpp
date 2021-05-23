#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;

    if(n % 2 == 0) {
        printf("%.10f\n", (double)1 / 2);
    } else {
        int bunsi = n / 2 + 1;
        printf("%.10f\n", (double)bunsi / n);
    }

    return 0;
}