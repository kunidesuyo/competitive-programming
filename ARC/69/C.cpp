#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n, m;
    cin >> n >> m;

    if(n >= m / 2) {
        cout << m / 2 << endl;
    } else if (n < m / 2) {
        m -= 2 * n;
        cout << n + m / 4 << endl;
    } 

    return 0;
}