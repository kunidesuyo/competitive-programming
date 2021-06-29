#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    int a[h][w], b[h][w];
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            cin >> b[i][j];
        }
    }

    int c[h][w];
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            c[i][j] = a[i][j] - b[i][j];
        }
    }

    ll ans = 0;
    for(int i = 0; i < min(h, w)-1; i++) {
        ans += abs(c[i][i]);
        c[i+1][i] += -c[i][i];
        c[i][i+1] += -c[i][i];
        c[i+1][i+1] += -c[i][i];
        c[i][i] = 0;
        for(int j = 1; i+j < w-1; j++) {
            ans += abs(c[i][i+j]);
            c[i+1][i+j] += -c[i][i+j];
            c[i][i+j+1] += -c[i][i+j];
            c[i+1][i+j+1] += -c[i][i+j];
            c[i][i+j] = 0;
        }

        for(int j = 1; i+j < h-1; j++) {
            ans += abs(c[i+j][i]);
            c[i+j+1][i] += -c[i+j][i];
            c[i+j][i+1] += -c[i+j][i];
            c[i+j+1][i+1] += -c[i+j][i];
            c[i+j][i] = 0;
        }

    }

    bool all_zero = true;
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            if(c[i][j] != 0) {
                all_zero = false;
                break;
            }
        }
        if(all_zero == false) break;
    }
    if(all_zero == true) {
        cout << "Yes" << endl;
        cout << ans << endl;
    } else {
        cout << "No" << endl;
    }

    

    return 0;
}