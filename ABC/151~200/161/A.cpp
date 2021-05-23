#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;


int main() {
    int x, y, z;
    cin >> x >> y >> z;
    swap(x, y);
    swap(x, z);

    printf("%d %d %d\n", x, y, z);

    return 0;
}