#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;

    if(n % 2 == 0) {
        cout << n / 2 << endl;
    } else {
        cout << n / 2 + 1 << endl;
    }

    return 0;
}