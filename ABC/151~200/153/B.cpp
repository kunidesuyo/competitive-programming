#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int h, n;
    cin >> h >> n;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        h -= a;
    }

    if(h <= 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    

    return 0;
}