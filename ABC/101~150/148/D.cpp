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

    int ans = 1;
    for(int i = 0; i < n; i++) {
        if(ans == a[i]) ans++;
    }

    if(ans == 1) {
        ans = -1;
    } else {
        ans = n - ans + 1;
    }
    cout << ans << endl;

    
    

    return 0;
}