#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int k, t;
    cin >> k >> t;
    int a[t];
    for(int i = 0; i < t; i++) cin >> a[i];

    sort(a, a+t, greater<int>());

    int maxi = 0;

    for(int i = 0; i < t; i++) {
        //cout << maxi << endl;
        if(i == 0 || maxi == 0) {
            maxi = a[i];
            continue;
        }
        if(maxi > a[i]) {
            maxi -= a[i];
        } else if (maxi < a[i]) {
            swap(maxi, a[i]);
            maxi -= a[i];
        } else {
            maxi = 0;
        }
    }

    if(maxi == 0) {
        cout << 0 << endl;
        return 0;
    }

    cout << maxi - 1 << endl;

    return 0;
}