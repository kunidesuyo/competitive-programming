#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int x;
    cin >> x;

    if(x == 1) {
        cout << 0 << endl;
    } else if (x == 0) {
        cout << 1 << endl;
    }

    return 0;
}