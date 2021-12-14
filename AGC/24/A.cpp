#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll a, b, c, k;
    cin >> a >> b >> c >> k;

    if(k % 2 == 0) {
        cout << a-b << endl;
    } else {
        cout << b-a << endl;
    }
    return 0;
}