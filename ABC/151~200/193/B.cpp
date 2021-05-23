#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int max = 1000000001;
    int ans = max;
    for(int i = 0; i < n; i++) {
        int a, p, x;
        cin >> a >> p >> x;
        if(a < x) {
            ans = min(ans, p);
        }
    }

    if(ans == max) ans = -1;

    cout << ans << endl;

    return 0;
}