#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll a, b, c;
    cin >> a >> b >> c;

    ll x1 = 4 * a * b;
    ll x2 = (c-a-b) * (c-a-b);

    if(c-a-b < 0) {
        cout << "No" << endl;
        return 0;
    }
    

    if(x1 < x2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}