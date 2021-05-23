#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;


using namespace std;

int main() {
    ll a;
    string b;

    cin >> a >> b;

    ll  b100 = (b[0] - '0') * 100 + (b[2] - '0') * 10 + (b[3] - '0');

    cout << a * b100 / 100 << endl;




    return 0;
}