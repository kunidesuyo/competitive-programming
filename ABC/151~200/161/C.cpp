#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n, k;
    cin >> n >> k;

    n = n % k;

    ll a = abs(n);
    ll b = abs(a - k);

    if(a < b) {
        cout << a << endl;
    } else {
        cout << b << endl;
    }


    return 0;
}