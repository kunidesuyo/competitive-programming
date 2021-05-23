#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int r, d, x;
    cin >> r >> d >> x;

    int xx[11];
    xx[0] = x;

    for(int i = 1; i < 11; i++) {
        xx[i] = xx[i - 1] * r - d;
        cout << xx[i] << endl;
    }


    return 0;
}