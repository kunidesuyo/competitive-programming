#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll n, m;
    cin >> n >> m;
    ll a[n][m];
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    ll ans = 0;
    for(ll i = 0; i < m-1; i++) {
        for(ll j = i+1; j < m; j++) {
            ll num = 0;
            for(ll k = 0; k < n; k++) {
                num += max(a[k][i], a[k][j]);
            }
            ans = max(ans, num);
        }
    }

    cout << ans << endl;

    return 0;
}