#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];

    sort(a, a+n, greater<ll>());

    ll same = 1;
    ll b[n-1];
    for(ll i = 0; i < n-1; i++) {
        b[i] = a[i] - a[i+1];
    }
    ll ans = 0;
    for(ll i = 0; i < n-1; i++) {
        if(b[i] * same <= k) {
            ans += ((a[i] + a[i+1] + 1) * b[i]) / 2 * same;
            k -= b[i] * same;
            same++;
        } else {
            ll num = k / same;
            //cout << same << " " << num << endl;
            ans += ((a[i] + a[i] - num + 1) * num) / 2 * same;
            k -= num * same;
            ll now = a[i] - num;
            ans += now * k;
            k = 0;
        }
        //cout << ans << endl;
    }
    if(k != 0) {
        ll num = k / same;
        //cout << same << " " << num << endl;
        if(a[n-1] >= num)  {
            ans += ((a[n-1] + a[n-1] - num + 1) * num) / 2 * same;
            k -= num * same;
            ll now = a[n-1] - num;
            ans += now * k;
        } else {
            ans += (a[n-1] * (a[n-1] + 1)) / 2 * same;
        }
    }
    cout << ans << endl;
    return 0;
}