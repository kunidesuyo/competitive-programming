#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int k, a, b;
    cin >> k;
    cin >> a >> b;

    int ans = 0;
    for(int i = a; i <= b; i++) {
        if(i % k == 0) ans = 1;
    }

    if(ans == 1) {
        cout << "OK" << endl;
    } else {
        cout << "NG" << endl;
    }

    return 0;
}