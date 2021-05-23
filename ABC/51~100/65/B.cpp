#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n+1];
    for(int i = 1; i <= n; i++) cin >> a[i];

    int akari = 1;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        akari = a[akari];
        ans++;
        if(akari == 2) break;
        if(i == n - 1) ans = -1;
    }
    cout << ans << endl;

    return 0;
}