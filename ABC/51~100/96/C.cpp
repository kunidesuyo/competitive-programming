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

    int di[4] = {0, -1, 0, 1};
    int dj[4] = {-1, 0, 1, 0};


    bool ans = true;
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            if(s[i][j] == '#') {
                bool ok = false;
                for(int k = 0; k < 4; k++) {
                    int x = i + di[k];
                    int y = j + dj[k];
                    if(x>=0 && x<h && y>=0 && y<w) {
                        if(s[x][y] == '#') ok = true;
                    }
                }
                if(!ok) ans = false;
            }
        }
    }

    cout << (ans ? "Yes" : "No") << endl;

    return 0;
}