#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, k, m;
    cin >> n >> k >> m;
    int a[n];
    for(int i = 0; i < n - 1; i++) cin >> a[i];

    m *= n;

    for(int i = 0; i < n - 1; i++) {
        m -= a[i];
    }

    if(m > k) {
        cout << -1 << endl;
    } else {
        if(m > 0) {
            cout << m << endl;
        } else {
            cout << 0 << endl;
        }
    }
    

    return 0;
}