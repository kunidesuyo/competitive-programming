#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll n;
    cin >> n;
    ll x[n], y[n];
    for(ll i = 0; i < n; i++) cin >> x[i] >> y[i];

    ll ansx = 0, ansy = 0;
    sort(x, x + n);
    sort(y, y + n);

    ll mid = n / 2;
    if(n % 2 == 0) mid--;

    ll midx = x[mid];
    ll midy = y[mid];

    for(ll i = 0; i < n; i++) {
        ansx += abs(x[i] - midx);
        ansy += abs(y[i] - midy);
    }

    cout << ansx + ansy << endl;

    return 0;
}