#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll a, b, c;
    cin >> a >> b >> c;
    ll cb = 1;
    for(ll i = 0; i < b; i++) {
        cb *= c;
    }
    if(a < cb) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}