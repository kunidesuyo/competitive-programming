#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int sa = 0;
    int sb = 0;

    for(int i = 0; i < 3; i++) {
        sa += a % 10;
        sb += b % 10;
        a /= 10;
        b /= 10;
    }

    if(sa > sb) {
        cout << sa << endl;
    } else {
        cout << sb << endl;
    }
    

    return 0;
}