#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    string s[h];
    for(int i = 0; i < h; i++) cin >> s[i];
    int dw[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
    int dh[8] = {1, 1, 1, 0, 0, -1, -1, -1};

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            int num = 0;
            if(s[i][j] == '#') continue;
            for(int k = 0; k < 8; k++) {
                int y = i + dh[k];
                int x = j + dw[k];
                if(y>=0 && y<h && x>=0 && x<w) {
                    if(s[y][x] == '#') num++;
                }
            }
            s[i][j] = '0' + num;
        }
    }

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            cout << s[i][j];
        }
        cout << "\n";
    }


    return 0;
}