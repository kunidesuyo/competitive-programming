#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if(a <= 9 && b <= 9) {
        cout << a * b << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}