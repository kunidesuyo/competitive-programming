#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

ll nC2(ll n) {
    return n * (n-1) / 2;
}

int main() {
    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];

    ll b[n+1];
    for(ll i = 0; i <= n; i++) {
        if(i==0) {
            b[i] = 0;
            continue;
        }
        b[i] = a[i-1] + b[i-1];
    }

    sort(b, b+n+1);
    map<ll, ll> m;
    for(int i = 0; i <= n; i++) m[b[i]]++;
    ll ans = 0;
    for(const auto& [x, y] : m) {
        if(y >= 2) ans += nC2(y);
    }
    /*ll ans = 0;
    ll num = b[0];
    ll same = 1;
    for(ll i = 1; i <= n; i++) {
        if(num == b[i]) {
            same++;
        } else {
            if(same >= 2) {
                ans += nC2(same);
            }
            num = b[i];
            same = 1;
        }
    }
    if(same >= 2) ans += nC2(same);*/

    cout << ans << endl;

    return 0;
}