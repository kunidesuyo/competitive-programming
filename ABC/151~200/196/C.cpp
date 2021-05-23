#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n;
    cin >> n;

    ll ans = 0;

    for(ll i = 1; i < 1000000; i++) {
        string num = to_string(i);
        string s = num + num;
        ll val = stoll(s);
        if(val <= n) {
            ans++;
        } else {
            break;
        }
    }

    cout << ans << endl;

    return 0;
}