#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;




int main() {
    int n;
    cin >> n;
    ll a[n][6];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 6; j++) {
            cin >> a[i][j];
        }
    }
    ll mod = 1000000000 + 7;

    ll ans = 1;
    for(int i = 0; i < n; i++) {
        ll p = 0;
        for(int j = 0; j < 6; j++) {
            p += a[i][j];
        }
        ans *= p;
        ans %= mod;
    }

    cout << ans << endl;

    return 0;
}