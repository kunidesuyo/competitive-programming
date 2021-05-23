#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int x;
    cin >> x;

    int y500, y5;

    y500 = x / 500;
    x %= 500;
    y5 = x / 5;

    cout << 1000 * y500 + 5 * y5 << endl;
    

    return 0;
}