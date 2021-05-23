#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int X, K;
    cin >> K >> X;

    int min, max;
    min = X - K + 1;
    max = X + K - 1;
    if (min < -1000000) {
        min = -1000000;
    }
    if (max > 1000000) {
        max = 1000000;
    }

    for(int i = min; i <= max; i++) {
        cout << i << " ";
    }
    cout << "\n";
    

    return 0;
}