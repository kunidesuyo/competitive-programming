#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, m, c;
    cin >> n >> m >> c;
    int b[m];
    for(int i = 0; i < m; i++) cin >> b[i];

    int a[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int ans = 0;

    for(int i = 0; i < n; i++) {
        int num = 0;
        for(int j = 0; j < m; j++) {
            num += a[i][j] * b[j];
        }
        num += c;
        if(num > 0) ans++;
    }

    cout << ans << endl;
    
    
        

    return 0;
}