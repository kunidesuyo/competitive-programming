#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n, greater<int>());
    
    int total = 0;
    for(int i = 0; i < n; i++) {
        total += a[i];
    }

    if(a[m - 1] * 4 * m >= total) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}