#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;


int main() {
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];

    ll b[n+1];
    b[0] = 0;
    b[1] = a[0];
    for(ll i = 2; i <= n; i++) {
        b[i] = b[i-1] + a[i-1];
    }

    /*cout << endl;
    for(ll i = 0; i <= n; i++) {
        cout << b[i] <<  " ";
    }
    cout << endl;
    cout << endl;*/

    ll ans = 0;

    for(int i = 1; i <= n; i++) {
        if(b[i] < k) continue;
        int l = 0;
        int r = i;
        while(r - l > 1) {
            int mid = (l+r)/2;
            //cout << l << " " << mid << " " << r << endl;
            if(b[i] - b[mid] >= k) {
                l = mid;
            } else {
                r = mid;
            }
        }
        ans += l+1;
    }

    cout << ans << endl;

    return 0;
}