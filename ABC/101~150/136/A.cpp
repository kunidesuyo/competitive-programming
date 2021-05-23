#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int ans = c - (a - b);

    if(ans < 0) {
        cout << 0 << endl;
    } else {
        cout << ans << endl;
    }
}