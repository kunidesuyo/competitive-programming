#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];

    ll total = 0;
    for(ll i = 0; i < n; i++) total += a[i];
    ll half = total / 2;
    ll b[n];
    ll num;
    for(ll i = 0; i < n; i++) {
        if(i == 0) {
            b[0] = a[0];
        } else {
            b[i] = b[i-1] + a[i];
        }
        if(b[i] > half) {
            num = i;
            break;
        }
    }

    /*cout << num << endl;

    cout << total << endl;
    cout << b[num-1] << endl;
    cout << b[num] << endl;*/
    
    ll ans = min(abs(2*b[num-1]-total), abs(2*b[num]-total));
    cout << ans << endl;

    return 0;
}