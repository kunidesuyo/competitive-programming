#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int k[m];
    int s[m][n];
    for(int i = 0; i < m; i++) {
        cin >> k[i];
        for(int j = 0; j < k[i]; j++) {
            cin >> s[i][j];
        }
    }
    int p[m];
    for(int i = 0; i < m; i++) {
        cin >> p[i];
    }

    int ans = 0;



    for(int bit = 0; bit < (1<<n); bit++) {
        vector<int> num(m);
        for(int i = 0; i < n; i++) {
            if(bit & (1<<i)) {
                for(int j = 0; j < m; j++) {
                    for(int l = 0; l < k[j]; l++) {
                        if(s[j][l]-1 == i) {
                            num[j]++;
                            break;
                        }
                    }
                }
            }
        }

        /*for(int i = 0; i < m; i++) {
            cout << num[i] << " ";
        }
        cout << "\n";
        */

        bool f = true;
        for(int i = 0; i < m; i++) {
            if(num[i] % 2 != p[i]) {
                f = false;
                break;
            }
        }
        if(f) ans++;
    }

    cout << ans << endl;

    return 0;
}