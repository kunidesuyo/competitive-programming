#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    ll n;
    cin >> n;

    int keta;

    for(int i = 0; i <= 15; i++) {
        if(pow(10, i) <= n && n < pow(10, i+1)) {
            keta = i+1;
        }
    }

    //cout << keta << endl;

    ll ans = 0;

    for(int i = 0; i <= 4; i++) {
        if(i*3 <= keta && keta <= (i+1)*3) {
            ans += i * (n - pow(10, i*3) + 1);
            break;
        } else {
            ans += i * (pow(10, (i+1)*3) - pow(10, i*3));
        }
    }

    if(keta == 16) ans += 5;

    cout << ans << endl;

    return 0;
}