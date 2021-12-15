#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll n, a, b;
    cin >> n >> a >> b;

    ll num = b - a;
    ll ans;
    if(num % 2 == 0) {
        ans = num / 2;
    } else {
        ll x1 = a-1;
        x1 += (b-a)/2 + 1;
        ll x2 = n-b;
        x2 += (b-a)/2 + 1;
        ans = min(x1, x2);
    }
    cout << ans << endl;

    return 0;
}