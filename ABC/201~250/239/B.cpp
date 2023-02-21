#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    ll x;
    cin >> x;
    if(x >= 0) {
        cout << x/10 << endl;
    } else {
        if(x % 10 == 0) {
            cout << x / 10 << endl;
        } else {
            cout << x / 10 - 1 << endl;
        }
    }

    return 0;
}