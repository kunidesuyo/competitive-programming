#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

ll ans;
ll n, x;
vector<vector<ll>> a;


void solve(ll val, ll index) {
    if(index == n) {
        if(val == x) ans += 1LL;
        return;
    }
    for(auto v : a[index]) {
        ll te = val * v;
        if(val > x / v) continue;
        solve(val * v, index+1);
        /*if(te / v == val) {
            solve(val * v, index + 1LL);
        }*/
    }
}

int main() {
    cin >> n >> x;
    a.resize(n);
    ans = 0;
    for(ll i = 0; i < n; i++) {
        ll l;
        cin >> l;
        for(ll j = 0; j < l; j++) {
            ll aa;
            cin >> aa;
            a[i].push_back(aa);
        }
    }

    solve(1LL, 0LL);

    cout << ans << endl;

    return 0;
}