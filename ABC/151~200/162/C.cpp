#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int k;
    cin >> k;

    int ans = 0;

    for(int a = 1; a <= k; a++) {
        for(int b = 1; b <= k; b++) {
            for(int c = 1; c <= k; c++) {
                ans += __gcd(__gcd(a, b), c);
            }
        }
    }

    cout << ans << endl;

    return 0;
}