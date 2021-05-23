#include <iostream>
#include <string.h>
#include <algorithm>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string a;
    cin >> a;

    if(a[a.length() - 1] == 's') {
        a += "es";
    } else {
        a += "s";
    }

    cout << a << endl;

    return 0;
}
