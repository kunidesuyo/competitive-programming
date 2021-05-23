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

    int ans = 1;
    int highest = h[0];

    for(int i = 1; i < n; i++) {
        if(h[i] >= highest) {
            ans++;
            highest = h[i];
        }
    }

    cout << ans << endl;

    return 0;
}