#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

long long GCD(long long a, long long b) {
    if (b == 0) return a;
    else return GCD(b, a % b);
}

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int maxi = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == k) {
            cout << "POSSIBLE" << endl;
            return 0;
        }
        maxi = max(maxi, a[i]);
    }
    if(maxi < k) {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }

    int g = a[0];

    for(int i = 1; i < n; i++) {
        g = GCD(g, a[i]);
    }

    if(k % g == 0) {
        cout << "POSSIBLE" << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }
    

    return 0;
}