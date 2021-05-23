#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n, a, b;
    cin >> n >> a >> b;

    if(a > b || (n==1&&a!=b)) {
        cout << 0 << endl;
    } else {
        cout << (n - 2) * (b - a) + 1 << endl;
    }

    return 0;
}