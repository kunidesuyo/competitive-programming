#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
    }
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

int main() {
    ll n, k;
    cin >> n >> k;
    pair<ll, ll> ab[n];
    for(ll i = 0; i < n; i++) {
        ll a,b;
        cin >> a >> b;
        ab[i].first = a;
        ab[i].second = b;
    }

    sort(ab, ab+n);

    ll ans = 0;
    for(ll i = 0; i < n; i++) {
        if(ans + k < ab[i].first) {
            break;
        } else {
            ll idou;
            idou = ab[i].first - ans;
            k -= idou;
            ans += idou;
            k += ab[i].second;
        }
    }
    ans += k;
    cout << ans << endl;

    return 0;
}