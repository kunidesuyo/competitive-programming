#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n;
    cin >> n;
    int c[n];
    for(int i = 0; i < n; i++) cin >> c[i];

    sort(c, c+n);
    ll mod = 1e9 + 7;
    ll ans = c[0];
    for(int i = 1; i < n; i++) {
        ans *= c[i]-i;
        ans %= mod;
    }
    cout << ans << endl;


    return 0;
}