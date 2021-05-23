#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll k, a, b;
    cin >> k >> a >> b;

    if(a+1 >= b-1) {
        cout << 1+k << endl;
        return 0;
    }

    ll num = (k - a + 1) / 2;
    ll x = (k - a + 1) % 2;

   

    cout << a + num * (b - a) + x << endl;

    return 0;
}