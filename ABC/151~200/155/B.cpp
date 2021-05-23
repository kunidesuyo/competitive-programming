#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    bool ok = true;

    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            if(!(a[i] % 3 == 0 || a[i] % 5 == 0)) {
                ok = false;
            }
        }
    }

    if(ok) {
        cout << "APPROVED" << endl;
    } else {
        cout << "DENIED" << endl;
    }

    return 0;
}