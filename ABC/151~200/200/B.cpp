#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n, k;
    cin >> n >> k;

    for(ll i = 0; i < k; i++) {
        if(n % 200 == 0) {
            n /= 200;
        } else {
            n *= 1000;
            n += 200;
        }
    }

    cout << n << endl;

    return 0;
}