#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    int a[h][w];
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w;j++) {
            cin >> a[i][j];
        }
    }
    
    int mini = 200;

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            mini = min(a[i][j], mini);
        }
    }

    int ans = 0;
    
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            ans += a[i][j] - mini;
        }
        
    }

    cout << ans << endl;

    return 0;
}