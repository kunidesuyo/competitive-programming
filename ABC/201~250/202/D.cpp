#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;


ll c[61][61];

int main() {
    ll a, b, k;
    cin >> a >> b >> k;

    string ans;

    c[0][0] = 1;
    for(int i = 0; i < 60; i++) {
        for(int j = 0; j < i+1; j++) {
            c[i+1][j] += c[i][j];
            c[i+1][j+1] += c[i][j];
        }
    }

    while(a+b > 0) {
        ll x = 0;
        if(a >= 1) x = c[a+b-1][a-1];
        if(k <= x) {
            ans += 'a';
            a--;
        } else {
            ans += 'b';
            b--;
            k -= x;
        }
    }
    cout << ans << endl;


    return 0;
}