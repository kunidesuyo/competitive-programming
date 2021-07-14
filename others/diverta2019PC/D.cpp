#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll n;
    cin >> n;

    vector<ll> div;

    for(ll i = 1; i*i <= n; i++) {
        if(n % i == 0) {
            div.push_back(i);
            if(i * i != n) div.push_back(n/i);
        }
    }

    ll ans = 0;
    for(int i = 0; i < div.size(); i++) {
        ll x = div[i] - 1;
        if(x == 0) continue;
        if(n/x == n%x) ans += x;
    }
    cout << ans << endl;

    return 0;
}