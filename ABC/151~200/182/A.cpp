#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int ans;
    ans = 2 * a + 100 - b;

    cout << ans << endl;

    return 0;
}