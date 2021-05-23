#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n, m;
    cin >> n >> m;
    priority_queue<ll, vector<ll>, less<ll>> q;
    for(ll i = 0; i < n; i++) {
        ll a;
        cin >> a;
        q.push(a);
    }

    for(ll i = 0; i < m; i++) {
        ll a = q.top();
        q.pop();
        a /= 2;
        q.push(a);
    }

    ll ans = 0;

    for(ll i = 0; i < n; i++) {
        ans += q.top();
        q.pop();
    }

    cout << ans << endl;

    return 0;
}