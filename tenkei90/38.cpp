#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll a, b;
    cin >> a >> b;
    ll maxi = 1;
    for(int i = 0; i < 18; i++) {
        maxi *= 10;
    }

    ll num = a / __gcd(a, b);
    if(num > maxi / b) {
        cout << "Large" << endl;
    } else {
        cout << num * b << endl;
    }

    return 0;
}