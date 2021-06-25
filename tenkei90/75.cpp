#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

vector<pair<long long, long long> > prime_factorize(long long N) {
    vector<pair<long long, long long> > res;
    for (long long a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        long long ex = 0; // 指数

        // 割れる限り割り続ける
        while (N % a == 0) {
            ++ex;
            N /= a;
        }

        // その結果を push
        res.push_back({a, ex});
    }

    // 最後に残った数について
    if (N != 1) res.push_back({N, 1});
    return res;
}

int main() {
    ll n;
    cin >> n;

    const auto &res = prime_factorize(n);
    ll num = 0;
    for(auto p : res) {
        num += p.second;
    }

    if(num == 1) {
        cout << 0 << endl;
        return 0;
    }

    ll l = 1;
    ll r = 2;
    for(ll i = 1;;i++) {
        if(l < num && num <= r) {
            cout << i << endl;
            return 0;
        }
        l *= 2;
        r *= 2;
    }

    return 0;
}