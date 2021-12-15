#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll x, y;
    cin >> x >> y;

    ll num = x;
    for(ll i = 1;;i++) {
        num *= 2;
        if(num > y) {
            cout << i << endl;
            break;
        }
    }   

    return 0;
}