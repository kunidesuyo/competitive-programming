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
    ll n, q;
    cin >> n >> q;
    ll a[n+1];
    for(ll i = 1; i <= n; i++) cin >> a[i];
    ll l[q], r[q], v[q];
    for(ll i = 0; i < q; i++){
        cin >> l[i] >> r[i] >> v[i];
    }
    ll e[n];
    ll ans = 0;
    for(ll i = 1; i <= n-1; i++) {
        e[i] = a[i+1] - a[i];
        ans += abs(e[i]);
    }


    for(ll i = 0; i < q; i++) {
        ll before = abs(e[l[i]-1]) + abs(e[r[i]]);
        //cout << abs(e[l[i]-1]) << " " << abs(e[r[i]]) << endl;
        if(l[i] >= 2) e[l[i]-1] += v[i];
        if(r[i] <= n-1) e[r[i]] -= v[i];
        ll after = abs(e[l[i]-1]) + abs(e[r[i]]);
        //cout << before << " " << after << endl;
        ans += (after - before);
        cout << ans << endl;
    }




    return 0;
}