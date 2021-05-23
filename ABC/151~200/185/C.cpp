#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

ll nCr(ll n, ll r) {
    ll ans = 1;
    for (ll i = n; i > n - r; --i) {
        ans = ans*i;
    }
    for (ll i = 1 ; i <= r; i++) {
        ans = ans / i;
    }
    return ans;
}

ll combinations2(ll n, ll k) {
    ll r = 1;
    for (ll d = 1; d <= k; ++d) {
        r *= n--;
        r /= d;
    }
    return r;
}

int main() {
    ll l;
    cin >> l;

    ll ans = 1;


    cout << combinations2(l - 1, 11) << endl;


    return 0;
}