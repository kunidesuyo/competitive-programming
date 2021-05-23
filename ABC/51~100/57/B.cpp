#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n, m;
    cin >> n >> m ;
    ll a[n], b[n];
    for(ll i = 0; i < n; i++) cin >> a[i] >> b[i];
    ll c[m], d[m];
    for(ll i = 0; i < m; i++) cin >> c[i] >> d[i];

    ll poll[n];

    for(ll i = 0; i < n; i++) {
        ll mini = 3000000000;
        for(ll j = 0; j < m; j++) {
            ll dis = abs(a[i] - c[j]) + abs(b[i] - d[j]);
            if(dis < mini) {
                mini = dis;
                poll[i] = j+1;
            }
        }
    }

    for(ll i = 0; i < n; i++) {
        cout << poll[i] << endl;
    }

    return 0;
}