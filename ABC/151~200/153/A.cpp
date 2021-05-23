#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int h, a;
    cin >> h >> a;

    if(h % a == 0) {
        cout << h / a << endl;
    } else {
        cout << h / a + 1 << endl;
    }

    return 0;
}