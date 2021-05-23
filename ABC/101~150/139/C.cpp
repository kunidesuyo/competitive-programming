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

    int ans = 0;
    int idou = 0;

    for(int i = 0; i < n - 1; i++) {
        if(h[i] >= h[i+1]) {
            idou++;
        } else {
            idou = 0;
        }
        ans = max(ans, idou);
    }

    cout << ans << endl;

    return 0;
}