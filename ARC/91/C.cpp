#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n, m;
    cin >> n >> m;

    ll ans;

    if(n-2>0&&m-2>0) {
        ans = (n-2) * (m-2);
    }
    if(n==1||m==1) {
        if(n==m) {
            ans = 1;
        } else if(n==1) {
            ans = m - 2;
        } else {
            ans = n - 2;
        }
    }

    if(n==2||m==2) {
        ans = 0;
    }

    cout << ans << endl;

    return 0;
}