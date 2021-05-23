#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;


int main() {
    ll n;
    cin >> n;

    set<ll> s;

    for(ll a = 2; a*a <= n; a++) {
        ll x = a * a;
        while(x <= n) {
            s.insert(x);
            x *= a;            
        }
    }

    cout << n - s.size() << endl;


    return 0;
}