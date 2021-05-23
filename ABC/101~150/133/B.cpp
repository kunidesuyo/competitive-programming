#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    int x[n][d];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < d; j++) {
            cin >> x[i][j];
        }
    }

    int ans = 0;

    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            int dis = 0;
            for(int k = 0; k < d; k++) {
                dis += pow(x[i][k] - x[j][k], 2);
            }
            bool f = false;
            for(int k = 0; k <= dis; k++) {
                if(k * k > dis) break;
                if(k * k == dis) {
                    f = true;
                    break;
                }
            }
            if(f) ans++;
        }
    }

    cout << ans << endl;

    return 0;
}