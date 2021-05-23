#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

vector<ll> pf(1009, 0);

void prime_factorize(ll N) {
    for (ll a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        ll ex = 0; // 指数

        while (N % a == 0) {
            ++ex;
            N /= a;
        }

        pf[a] += ex;
    }

    if (N != 1) {
        pf[N]++;
    }
}

int main() {
    ll n;
    cin >> n;
    ll mod = 1000000007;

    ll ans = 1;
    for(int i = 1; i <= n; i++) {
        prime_factorize(i);
    }

    for(int i = 2; i <= 1000; i++) {
        //cout << pf[i] << endl;
        if(pf[i] != 0) {
            ans *= pf[i]+1;
            ans %= mod;
        }
    }

    cout << ans << endl;

    return 0;
}