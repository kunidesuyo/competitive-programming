#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int kokei = a + b;
    int sibou = b;

    if(kokei >= 15 && sibou >= 8) {
        cout << 1 << endl;
    } else if(kokei >= 10 && sibou >= 3) {
        cout << 2 << endl;
    } else if (kokei >= 3) {
        cout << 3 << endl;
    } else {
        cout << 4 << endl;
    }

    return 0;
}