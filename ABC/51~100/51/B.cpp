#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int k, s;
    cin >> k >> s;

    int ans = 0;

    for(int x = 0; x <= k; x++) {
        for(int y = 0; y <= k; y++) {
            if(s - x - y <= k && s - x - y >= 0) {
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}