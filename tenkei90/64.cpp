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
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll l[q], r[q], v[q];
    for(ll i = 0; i < q; i++){
        cin >> l[i] >> r[i] >> v[i];
        l[i]--; r[i]--;
    }
    ll e[n-1];
    ll ans = 0;
    for(ll i = 0; i < n-1; i++) {
        e[i] = a[i+1] - a[i];
        ans += abs(e[i]);
    }


    for(ll i = 0; i < q; i++) {
        ll before = abs(e[l[i]-1]) + abs(e[r[i]]);
        if(l[i] > 0) e[l[i]-1] += v[i];
        if(r[i] < n-1) e[r[i]] -= v[i];
        ll after = abs(e[l[i]-1]) + abs(e[r[i]]);
        ans += (after - before);
        cout << ans << endl;
    }




    return 0;
}