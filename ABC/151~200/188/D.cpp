#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n, prime;
    cin >> n >> prime;
    ll a, b, c;
    pair<ll, ll> x[2 * n];
    for(ll i = 0; i < n; i++) {
        cin >> a >> b >> c;
            x[2 * i].first = a;
            x[2 * i].second = c;
            x[2 * i + 1].first = b + 1;
            x[2 * i + 1].second = -c;
    }

    ll ans = 0;

    sort(x, x + 2 * n);

    ll fee = 0;
    ll time = x[0].first;

    for(ll i = 0; i < 2 * n; i++) {
        if(fee > prime) {
            ans += (x[i].first - time) * prime;
        } else {
            ans += (x[i].first - time) * fee;
        }
        fee += x[i].second;
        time = x[i].first;
        //cout << i << " " << fee << " " << time << endl;
    }
    cout << ans << endl;

    


    return 0;
}