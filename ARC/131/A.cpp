#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll a, b;
    cin >> a >> b;
    ll ketaa = 0;
    ll num = a;
    while(num > 0) {
        num /= 10;
        ketaa++;
    }

    ll ans = 0;
    ll keta = 1;
    for(ll i = 0; i < 9; i++) keta *= 10;
    ans += keta * (b/2);
    if(b % 2 != 0) {
        keta /= 10;
        ans += keta * 5;
    }
    ans += a;
    cout << ans << endl;
    return 0;
}