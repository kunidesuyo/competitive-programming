#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

ll nCr(int n, int r) {
    long ans = 1;
    for (int i = n; i > n - r; --i) {
        ans = ans*i;
    }
    for (int i = 1 ; i < r + 1; ++i) {
        ans = ans / i;
    }
    return ans;
}

int main() {
    int n, m;
    cin >> n >> m;

    ll ans;
    ans = nCr(n , 2) + nCr(m, 2);

    cout << ans << endl;



    return 0;
}