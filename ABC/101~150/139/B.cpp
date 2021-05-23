#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int ans = 0;
    int c = 1;
    while(c < b) {
        c--;
        c += a;
        ans++;
    }

    cout << ans << endl;

    return 0;
}