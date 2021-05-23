#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int a[3];
    for(int i = 0; i < 3; i++) cin >> a[i];

    int ka = 0;

    for(int i = 0; i < 3; i++) {
        if(a[i%3] == a[(i+1)%3] && a[i%3] != a[(i+2)%3]) ka = 1;
    }

    if(ka == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}