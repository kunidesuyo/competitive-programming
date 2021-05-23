#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int m = A + B;

    if (m % 2 == 0) {
        cout << (A+B)/2 << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}