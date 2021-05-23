#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int v, t, s, d;
    cin >> v >> t >> s >> d;
    t *= v;
    s *= v;

    if(t <= d && d <= s) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }

    return 0;
}