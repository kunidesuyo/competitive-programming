#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    ll a, b, k;
    cin >> a >> b >> k;
    int ans = 0;
    if(a == b) {
        cout << ans << endl;
        return 0;
    }
    while(true) {
        a *= k;
        ans++;
        if(a >= b) {
            cout << ans << endl;
            break;
        }
    }

    return 0;
}