#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll n;
    cin >> n;

    ll l0 = 2;
    ll l1 = 1;

    n--;
    if(n == 0) {
        cout << 1 << endl;
        return 0;
    }

    for(ll i = 0; i < n; i++) {
        ll l2 = l1 + l0;
        l0 = l1;
        l1 = l2;
    }

    cout << l1 << endl;
       

    return 0;
}