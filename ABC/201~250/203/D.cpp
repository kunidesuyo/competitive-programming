#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

ll nCr(ll n, ll k) {
    ll r = 1;
    for (ll d = 1; d <= k; ++d) {
        r *= n--;
        r /= d;
    }
    return r;
}

int main() {
    ll a, b, k;
    cin >> a >> b >> k;

    if(k==1) {
        cout << string(a, 'a') + string(b, 'b') << endl;
        return 0;
    }

    for(int i = 1; i <= a; i++) {
        int num = nCr(i+b, i) - nCr(i+b-1, i-1);
    }

    /*ll l = 0;
    ll r = combinations2(a+b, a);

    while(l < r) {
        ll mid = (l+r) / 2;

    }*/


    return 0;
}