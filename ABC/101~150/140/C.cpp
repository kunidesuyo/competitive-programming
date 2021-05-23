#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n; 
    cin >> n;
    int b[n-1];
    for(int i = 0; i < n - 1; i++) cin >> b[i];

    int a[n];

    for(int i = 0; i < n; i++) {
        a[i] = 1000000;
    }

    for(int i = 0; i < n - 1; i++) {
        a[i] = min(a[i], b[i]);
        a[i+1] = b[i];
    }

    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans += a[i];
    }

    cout << ans << endl;

    return 0;
}