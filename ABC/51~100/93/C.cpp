#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int a[3];
    for(int i = 0; i < 3; i++) cin >> a[i];

    int big = 0;
    int total = 0;
    for(int i = 0; i < 3; i++) {
        big = max(big, a[i]);
        total += a[i];
    }

    if((big * 3 - total) % 2 != 0) big++;

    int ans = (big * 3 - total) / 2;

    cout << ans << endl;


    return 0;
}