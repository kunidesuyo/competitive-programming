#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

ll gcd(ll x, ll y) {
    if(x % y == 0) {
        return y;
    } else {
        return gcd(y, x % y); 
    }
}

vector<long long> enum_divisors(long long N) {
    vector<long long> res;
    for (long long i = 1; i * i <= N; ++i) {
        if (N % i == 0) {
            res.push_back(i);
            if (N/i != i) res.push_back(N/i);
        }
    }
    sort(res.begin(), res.end(), greater<long long>());
    return res;
}

int main() {
    ll a, b;
    cin >> a >> b;

    ll ans = 1;

    for(ll i = a; i <= b-1; i++) {
        if(i == 1) continue;
        const auto &res = enum_divisors(i);
        for(auto p : res) {
            if(i + p <= b) {
                ans = max(ans, p);
            }
        }
    }
    
    cout << ans << endl;

    return 0;
}