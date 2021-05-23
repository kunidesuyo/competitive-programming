#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int p[n];
    for(int i = 0; i< n; i++) cin >> p[i];

    sort(p, p + n);

    int ans = 0;

    for(int i = 0; i < k; i++) {
        ans += p[i];
    }

    cout << ans << endl;
    

    return 0;
}