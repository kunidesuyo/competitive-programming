#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    if(a * n > b) {
        cout << b << endl;
    } else {
        cout << a * n << endl;
    }

    return 0;
}