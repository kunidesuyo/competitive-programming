#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, m, t;
    cin >> n >> m >> t;
    int a[m], b[m];
    for(int i = 0; i < m; i++) cin >> a[i] >> b[i];

    int capa = n;

    for(int i = 0; i < m; i++) {
        if(i == 0) {
            n -= a[i];
        } else {
            n -= a[i] - b[i - 1];
        }

        if(n <= 0) {
            cout << "No" << endl;
            return 0;
        }
        n += b[i] - a[i];
        if(n >= capa) n = capa;

    }

    n -= t - b[m-1];

    if(n <= 0) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
    

    return 0;
}