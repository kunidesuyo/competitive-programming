#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll a, b, k;
    cin >> a >> b >> k;

    if(a <= k) {
        k -= a;
        a = 0;
    } else {
        a -= k;
        k = 0;
    }



    if(k > 0) {
        if(b <= k) {
            b = 0;
        } else {
            b -= k;
        }
    }
    cout << a << " " << b << endl;


    return 0;
}