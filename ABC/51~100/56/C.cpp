#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int x;
    cin >> x;

    int ans;

    for(int t = 1; t <= x; t++) {
        int sum = t * (t + 1) / 2;
        if(sum >= x) {
            ans = t;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}