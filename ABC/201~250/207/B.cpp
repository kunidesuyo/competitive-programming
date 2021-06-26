#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    if(b >= c*d) {
        cout << -1<< endl;
        return 0;
    }

    ll ans = 0;
    ll blue = a;
    ll red = 0;
    while(true) {
        blue += b;
        red += c;
        ans++;
        if(blue <= red * d) {
            cout << ans << endl;
            return 0;
        }
    }

    return 0;
}