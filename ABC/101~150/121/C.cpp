#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll n, m;
    cin >> n >> m;
    pair<ll, ll> ab[n];
    for(ll i = 0; i < n; i++) {
        cin >> ab[i].first >> ab[i].second;
    }
    sort(ab, ab+n);
    ll ans = 0;
    for(ll i = 0; i < n; i++) {
        if(ab[i].second > m) {
            ans += ab[i].first * m;
            break;
        } else {
            ans += ab[i].first * ab[i].second;
            m -= ab[i].second;
        }
    }
    cout << ans << endl;

    return 0;
}