#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n, m;
    ll k;
    cin >> n >> m >> k;
    ll a[n], b[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    ll sum_a[n + 1], sum_b[m + 1];
    sum_a[0] = 0;
    sum_b[0] = 0;

    for(int i = 0; i < n; i++) sum_a[i+1] = sum_a[i] + a[i];
    for(int i = 0; i < m; i++) sum_b[i+1] = sum_b[i] + b[i];

    

    ll ans = 0;
    ll j = m;

    for(int i = 0; i <= n; i++) {
        if(sum_a[i] > k) break;
        while(sum_b[j] > k - sum_a[i]) {
            j--;
        }
        ans = max(ans ,i + j);
    }

    cout << ans << endl;

    return 0;
}