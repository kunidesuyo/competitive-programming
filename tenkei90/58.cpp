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

ll dentaku(ll x) {
    ll val = x;
    while(x > 0) {
        val += x % 10;
        x /= 10;
    }
    return val % 100000;
}

int main() {
    ll n, k;
    cin >> n >> k;

    vector<ll> vis(100000, -1);
    vis[n] = 0;
    bool loop_out = false;
    for(ll i = 1; i <= k; i++) {
        n = dentaku(n);
        if(loop_out == true) continue;
        if(vis[n] != -1) {
            ll num = i - vis[n];
            ll num2 = (k-i) / num;
            i += num * num2;
            loop_out = true;
        } else {
            vis[n] = i;
        }
    }

    cout << n << endl;



    return 0;
}