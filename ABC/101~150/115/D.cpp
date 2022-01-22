#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

ll lsize[51];
ll paty[51];

ll solve(ll l, ll x) {
    if(l == 0) return 1;
    // b solve(l-1) p solve(l-1) b
    ll ret = 0;
    x--;
    if(x <= 0) return ret;

    if(x >= lsize[l-1]) {
        ret += paty[l-1];
    } else {
        ret += solve(l-1, x);
        return ret;
    }
    x -= lsize[l-1];
    if(x <= 0) return ret;

    x--;
    ret++;
    if(x <= 0) return ret;

    if(x >= lsize[l-1]) {
        ret += paty[l-1];
    } else {
        ret += solve(l-1, x);
        return ret;
    }
    /*x -= lsize[l-1];
    
    x--;
    if(x == 0) return ret;*/
    return ret;

}

int main() {
    ll n, x;
    cin >> n >> x;

    lsize[0] = 1;
    paty[0] = 1;
    for(ll i = 1; i <= n; i++) {
        lsize[i] = 2 * lsize[i-1] + 3;
        paty[i] = 2 * paty[i-1] + 1;
    }


    ll ans = solve(n, x);
    cout << ans << endl;
    
    

    return 0;
}