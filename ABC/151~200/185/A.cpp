#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int a[4];
    for(int i = 0; i < 4; i++) cin >> a[i];

    int ans = 1000;

    for(int i = 0; i < 4; i++) {
        if(ans > a[i]) ans = a[i];
    }

    cout << ans << endl;

    return 0;
}