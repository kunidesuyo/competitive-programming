#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n;
    cin >> n;
    vector<ll> march(5);
    for(ll i = 0; i < n; i++) {
        string s;
        cin >> s;
        if(s[0] == 'M') {
            march[0]++;
        } else if (s[0] == 'A') {
            march[1]++;
        }else if (s[0] == 'R') {
            march[2]++;
        }else if (s[0] == 'C') {
            march[3]++;
        }else if (s[0] == 'H') {
            march[4]++;
        }
    }

    ll ans = 0;

    for(ll i = 0; i < 5-2; i++) {
        for(ll j = i+1; j < 5-1; j++) {
            for(ll k = j+1; k < 5; k++) {
                ans += march[i]*march[j]*march[k];
            }
        }
    }

    cout << ans << endl;



    return 0;
}