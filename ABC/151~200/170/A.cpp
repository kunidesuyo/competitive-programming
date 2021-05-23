#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int x[5];
    for(int i = 0; i < 5; i++) cin >> x[i];

    int ans;

    for(int i = 0; i < 5; i++) {
        if(x[i] == 0) {
            ans = i + 1;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}