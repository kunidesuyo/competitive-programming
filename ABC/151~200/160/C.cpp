#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int k, n;
    cin >>  k >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int b[n];
    int sum_a = 0;
    for(int i = 0; i < n - 1; i++) {
        b[i] = a[i+1] - a[i];
    }

    b[n-1] = k - a[n-1] + a[0];

    int bmax = 0;
    for(int i = 0; i < n; i++) {
        bmax = max(b[i], bmax);
    }

    cout << k - bmax << endl;

    return 0;
}