#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n, k;
    cin >> n >> k;
    pair<ll, ll> ab[n];
    for(ll i = 0; i < n; i++) {
        cin >> ab[i].first >> ab[i].second;
    }

    sort(ab, ab+n);

    ll count = ab[0].second;
    ll val = ab[0].first;

    for(ll i = 1; i < n; i++) {
        if(k <= count) {
            break;
        }
        val = ab[i].first;
        count += ab[i].second;
    }

    /*for(ll i = 0; i < n; i++) {
        if(val == ab[i].first) {
            ans += ab[i].second;
        }
    }*/

    cout << val << endl;


    return 0;
}