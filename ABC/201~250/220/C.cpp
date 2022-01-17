#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll n;
    cin >> n;
    ll a[n];
    ll total = 0;
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }
    ll x;
    cin >> x;

    ll ans = 0;
    ll num = x / total;
    x -= total * num;
    ans += n * num;

    for(ll i = 0; i < n; i++) {
        x -= a[i];
        ans++;
        if(x < 0) break;
    }

    cout << ans << endl;


    return 0;
}