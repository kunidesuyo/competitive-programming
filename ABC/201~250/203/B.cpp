#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
    }
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

int main() {
    int n, k;
    cin >> n >> k;
    int ans = 0;

    for(int i = 1; i <= n; i++) {
        ans += 100 * i;
    }
    ans *= k;

    int a = 0;
    for(int i = 1; i <= k; i++) {
        a += i;
    }
    a *= n;
    ans += a;
    cout << ans << endl;

    return 0;
}