#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;

    for(int x = 1; x <= n; x++) {
        int tax = x * 8;
        tax /= 100;
        if(x + tax == n) {
            cout << x << endl;
            return 0;
        }
    }
    cout << ":(" << endl;

    return 0;
}