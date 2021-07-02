#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll h;
    cin >> h;

    ll ans = 0;
    for(ll i = 1;; i *= 2) {
        ans += i;
        h /= 2;
        if(h == 0) break;
    }
    cout << ans << endl;

    return 0;
}