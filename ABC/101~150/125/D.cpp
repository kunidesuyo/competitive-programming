#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n;
    cin >> n;
    ll mini = 10000000000;
    ll total = 0;
    ll minus = 0;
    for(ll i = 0; i < n; i++) {
        ll a;
        cin >> a;
        if(a < 0) minus++;
        mini = min(mini, abs(a));
        total += abs(a);
    }


    if(minus % 2 == 0) {
        cout << total << endl;
    } else {
        cout << total - 2 * mini << endl;
    }


    return 0;
}