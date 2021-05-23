#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int h[n];
    for(int i = 0; i < n; i++) cin >> h[i];

    h[0]--;

    bool ans = true;
    for(int i = 0; i < n - 1; i++) {
        if(h[i] <= h[i + 1]) {
            if(h[i] != h[i + 1]) h[i + 1]--;
        } else {
            ans = false;
        }
    }

    if(ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}