#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if(a >= 13) {
        cout << b << endl;
    } else if(a >= 6 && a <= 12) {
        cout << b / 2 << endl;
    } else if (a <= 5) {
        cout << 0 << endl;
    }

    return 0;
}