#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll n;
    cin >> n;

    ll ans = 1;
    ll mod = 1e9 + 7;
    for(ll i = 1; i <= n; i++) {
        ans *= i;
        ans %= mod;
    }
    cout << ans << endl;

    return 0;
}