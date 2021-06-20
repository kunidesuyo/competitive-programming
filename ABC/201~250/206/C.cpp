#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll n;
    cin >> n;
    ll a[n];
    map<ll, ll> b;
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
        b[a[i]]++;
    }

    ll ans = 0;
    for(ll i = 0; i < n; i++) {
        ans += n - i - b[a[i]];
        b[a[i]]--;
    }
    cout << ans << endl;
    

    return 0;
}