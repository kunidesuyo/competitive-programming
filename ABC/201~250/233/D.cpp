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

    ll b[n+1];
    b[0] = 0;
    for(ll i = 0; i < n; i++) {
        b[i+1] = b[i] + a[i];
    }

    ll ans = 0;
    map<ll, ll> m;
    for(ll l = 1; l <= n; l++) {
        m[b[l-1]]++;
        ans += m[b[l] - k];
    }
    
    cout << ans << endl;

    return 0;
}