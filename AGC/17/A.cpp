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
    for (ll i = 1 ; i < r + 1; ++i) {
        ans = ans / i;
    }
    return ans;
}

ll odd_num(ll odd, ll p) {
    ll val = 0;
    for(ll i = p; i <= odd; i+=2) {
        val += nCr(odd, min(i, odd-i));
    }
    return val;
}

int main() {
    ll n, p;
    cin >> n >> p;
    ll even = 0;
    ll odd = 0;
    for(ll i = 0; i < n; i++) {
        ll a;
        cin >> a;
        if(a%2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    if(odd == 0 && p == 1) {
        cout << 0 << endl;
        return 0;
    } 


    ll ans = pow(2, even) * odd_num(odd, p);
    cout << ans << endl;
    
    

    return 0;
}