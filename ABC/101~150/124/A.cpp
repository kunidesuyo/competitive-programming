#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;


    int ans = 0;
    for(int i = 0; i < 2; i++) {
        if(a>b) {
            ans += a;
            a--;
        } else {
            ans += b;
            b--;
        }
    }

    cout << ans << endl;

    return 0;
}