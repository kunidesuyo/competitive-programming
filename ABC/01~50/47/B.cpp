#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int w, h, n;
    cin >> w >> h >> n;
    int x[n], y[n], a[n];
    for(int i = 0; i < n; i++) cin >> x[i] >> y[i] >> a[i];

    bool square[h][w];
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            square[i][j] = true;
        }
    }

    for(int i = 0; i < n; i++) {
        if(a[i] == 1) {
            for(int j = x[i]-1; j >= 0; j--) {
                for(int k = 0; k < h; k++) {
                    square[k][j] = false;
                }
            }
        } else if(a[i] == 2) {
            for(int j = x[i]; j < w; j++) {
                for(int k = 0; k < h; k++) {
                    square[k][j] = false;
                }
            }
        } else if(a[i] == 3) {
            for(int j = y[i]-1; j >= 0; j--) {
                for(int k = 0; k < w; k++) {
                    square[j][k] = false;
                }
            }
        } else if(a[i] == 4) {
            for(int j = y[i]; j < h; j++) {
                for(int k = 0; k < w; k++) {
                    square[j][k] = false;
                }
            }
        }
        /*for(int i = 0; i < h; i++) {
            for(int j = 0; j < w; j++) {
                cout << square[i][j];
            }
            cout << "\n";
        }
        cout << "\n";*/
    }

    int ans = 0;

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            if(square[i][j]) ans++;
        }
    }

    cout << ans << endl;

    return 0;
}