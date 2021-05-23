#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[3] = {0, 0, 0};
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(x % 4 == 0) {
            a[2]++;
        } else if(x % 2 == 0) {
            a[1]++;
        } else {
            a[0]++;
        }
    }

    bool ans = true;
    if(a[0] > a[2]) {
        ans = false;
        if(a[0] + a[2] == n) {
            if(a[0] == a[2] + 1) ans = true;
        }
    }


    cout << (ans ? "Yes" : "No") << endl;

    return 0;
}