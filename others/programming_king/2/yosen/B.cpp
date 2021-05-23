#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int d[n];
    for(int i = 0; i < n; i++) cin >> d[i];

    if(d[0] != 0) {
        cout << 0 << endl;
        return 0;
    }

    vector<ll> p(n, 0);

    for(int i = 0; i < n; i++) {
        p[d[i]]++;
    }
    
    if(p[0] != 1) {
        cout << 0 << endl;
        return 0;
    }

    int end = -1;

    for(int i = 0; i < n; i++) {
        if(p[i] == 0) {
            for(int j = i; j < n; j++) {
                if(p[j] > 0) {
                    cout << 0 << endl;
                    return 0;
                }
            }
            end = i-1;
        }
        if(end != -1) break;
    }

    ll mod = 998244353;
    ll ans = 1;

    for(int i = 2; i <= end; i++) {
        /*ans *= pow(p[i-1], p[i]);
        ans %= mod;*/
        for(int j = 0; j < p[i]; j++) {
            ans *= p[i-1];
            ans %= mod;
        }
    }

    cout << ans << endl;



    return 0;
}