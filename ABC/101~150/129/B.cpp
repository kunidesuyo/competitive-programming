#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int w[n];
    int total = 0;
    for(int i = 0; i < n; i++) {
        cin >> w[i];
        total += w[i];
    }
    int ans = 100000;
    int num = 0;
    for(int i = 0; i < n; i++) {
        num += w[i];
        ans = min(ans, abs(total - num * 2));
    }

    cout << ans << endl;


    return 0;
}