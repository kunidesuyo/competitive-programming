#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n + 1], b[n + 1], c[n];
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) cin >> b[i];
    for(int i = 1; i <= n-1; i++) cin >> c[i];

    int ans = 0;
    int num;

    for(int i = 1; i <= n; i++) {
        ans += b[a[i]];
        if(i != 1) {
            if(a[i] == num + 1) {
                ans += c[num];
            }
        }
        num = a[i];
    }

    cout << ans << endl;

    return 0;
}