#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s;
    cin >> s;
    ll n = s.length();

    ll ans = 0;

    for(ll i = 0; i < n; i++) {
        if(s[i] == 'U') {
            ans += n - i - 1;
            ans += i * 2;
        } else if (s[i] == 'D') {
            ans += i;
            ans += (n-i-1) * 2;
        }
    }

    cout << ans<< endl;

    return 0;
}