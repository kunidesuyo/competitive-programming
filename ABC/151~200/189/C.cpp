#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int ans = 0;

    for(int i = 0; i < n; i++) {
        int m = 1000000;
        for(int j = i; j < n; j++) {
            if(j == i) {
                m = min(a[i], a[j]);
            } else {
                m = min(m, a[j]);
            }
            ans = max(ans, m * (j - i + 1));
        }
    }

    cout << ans << endl;

    return 0;
}