#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, r;
    cin >> n >> r;

    if(n >= 10) {
        cout << r << endl;
    } else {
        cout << r + 100 * (10 - n) << endl;
    }

    return 0;
}