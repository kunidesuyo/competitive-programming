#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    string c[h];
    for(int i = 0; i < h; i++) {
        cin >> c[i];
    }

    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            if(c[i][j] == '.') {
                vector<bool> z(6, false);
                for(int k = 0; k < 4; k++) {
                    int x = i + dx[k];
                    int y = j + dy[k];
                    if(0<=x&&x<h&&0<=y&&y<w&&c[x][y]!='.') {
                        int num = c[x][y] - '0';
                        z[num] = true;
                    }
                }
                for(int k = 1; k <= 5; k++) {
                    if(z[k] == false) {
                        char t = '0' + k;
                        c[i][j] = t;
                        break;
                    }
                }
            }
        }
    }

    for(int i = 0; i < h; i++) cout << c[i] << endl;

    return 0;
}