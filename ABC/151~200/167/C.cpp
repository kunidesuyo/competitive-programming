#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, m, x;
    cin >> n >> m >> x;
    int c[n];
    int a[n][m];
    for(int i = 0; i < n; i++) {
        cin >> c[i];
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }   

    int total_c;
    int comp[m];
    int update;
    int ans = 100000000;
    int imp = 1;


    for(int i = 0; i < (1 << n); i++) {
        total_c = 0;
        for(int j = 0; j < m; j++) {
            comp[j] = 0;
        }

        for(int j = 0; j < n; j++) {
            if(i & (1 << j)) {
                total_c += c[j];
                for(int k = 0; k < m; k++) {
                    comp[k] += a[j][k];
                }
            }
        }
        update = 1;
        for(int j = 0; j < m; j++) {
            if(comp[j] < x) update = 0;
        }
        if(update == 1 && total_c < ans) {
            ans = total_c;
            imp = 0;
        }

    }

    if(imp == 1) ans = -1;

    cout << ans << endl;

    return 0;
}
