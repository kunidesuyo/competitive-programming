#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if(a - 2*b < 0) {
        cout << 0 << endl;
    } else {
        cout << a - 2 * b << endl;
    }

    return 0;
}