#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

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
    ll s;
    cin >> s;

    int x2 = 1000000000;

    int y3 = s / x2;
    int x3;
    if(s % x2 == 0) {
        x3 = 0;
    } else {
        y3++;
        x3 = y3 * x2 - s;
    }
    


    cout << 0 << " ";
    cout << 0 << " ";
    cout << x2 << " ";
    cout << 1 << " ";
    cout << x3 << " ";
    cout << y3 << endl;


    return 0;
}