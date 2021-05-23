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

    int ab[3];
    int ans = -1000000;
    ab[0] = a + b;
    ab[1] = a - b;
    ab[2] = a * b;
    
    for(int i = 0; i < 3; i++) {
        ans = max(ans, ab[i]);
    }

    cout << ans << endl;

    return 0;
}