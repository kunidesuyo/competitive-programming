#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int d, t, s;
    cin >> d >> t >> s;

    if(s * t >= d) {
        cout << "Yes"  << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}