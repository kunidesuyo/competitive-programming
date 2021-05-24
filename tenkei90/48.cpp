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
    ll a[n], b[n];
    for(ll i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    
    vector<ll> t;
    for(ll i = 0; i < n; i++) {
        t.push_back(b[i]);
        t.push_back(a[i]-b[i]);
    }
    sort(t.begin(), t.end(), greater<ll>());

    ll ans = 0;
    for(ll i = 0; i < k; i++) {
        ans += t[i];
    }

    cout << ans << endl;

    return 0;
}