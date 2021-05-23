#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;



int main() {
    ll n, l, r;
    cin >> n >> l >> r;
    ll a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + N);

    ll ans = 0;


    // ??未確認
    for(int i = 0; i < n; i++) {
        int left = lower_bound(a, a + n, l - a[i]) - a;
        int right = lower_bound(a, a + n, r - a[i]) - a;
        ans += 1LL * (right - left + 1);
    }

    cout << ans << endl;
    
    

    return 0;
}