#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll n;
    ll l, w;
    cin >> n >> l >> w;
    ll a[n+2];
    a[0] = 0;
    a[n+1] = l;
    for(ll i = 1; i <= n; i++) cin >> a[i];

    ll ans = 0;
    for(ll i = 0; i < n+1; i++) {
        ll num;
        if(i != 0) num = a[i+1] - (a[i]+w);
        else num = a[i+1] - a[i];
        if(num > 0) {
            ll x = num / w;
            if(num % w != 0) x+=1LL;
            ans += x;
        }
    }
    cout << ans << endl;


    return 0;
}