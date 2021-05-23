#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int p[3];
    for(int i = 0; i < 3; i++) cin >> p[i];
    int ma = 0;
    
    int ans = 0;
    for(int i = 0; i < 3; i++) {
        ma = max(p[i], ma);
        ans += p[i];
    }

    ans -= ma;
    cout << ans << endl;

    return 0;
}