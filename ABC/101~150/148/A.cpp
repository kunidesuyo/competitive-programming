#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int a[2];
    cin >> a[0] >> a[1];

    for(int i = 1; i <= 3; i++) {
        if(i != a[0] && i != a[1]) {
            cout << i << endl;
        }
    }

    return 0;
}