#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int x[n], y[n];
    for(int i = 0; i < n; i++) cin >> x[i] >> y[i];

    int ans = 0;

    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            double angle = (double)abs(y[i] - y[j]) / abs(x[i] - x[j]);
            if(angle >= -1 && angle <= 1) {
                ans++;
            }
        }
    }
    
    cout << ans << endl;

    return 0;
}