#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int l[n];
    for(int i = 0; i < n; i++) cin >> l[i];

    sort(l, l + n, greater<int>());

    int ans = 0;
    for(int i = 0; i < k; i++) {
        ans += l[i];
    }
    
    cout << ans << endl;

    return 0;
}