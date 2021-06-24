#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int h, w;
bool visited[20][20];
string c[20];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int search(int sx, int sy, int px, int py) {
    if(sx == px && sy == py && visited[px][py] == true) return 0;
    visited[px][py] = true;//

    int val = -100000;
    for(int i = 0; i < 4; i++) {
        int nx = px + dx[i];
        int ny = py + dy[i];
        if(nx < 0 || nx >= h || ny < 0 || ny >= w || c[nx][ny] == '#') continue;
        if((sx != nx || sy != ny) && visited[nx][ny] == true) continue;
        int v = search(sx, sy, nx, ny);
        val = max(val, v+1);
    }
    visited[px][py] = false;//
    return val;
}

int main() {
    cin >> h >> w;
    for(int i = 0; i < h; i++) {
        cin >> c[i];
    }

    int ans = -1;

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            if(c[i][j] == '#') continue;
            ans = max(ans, search(i, j, i, j));
        }
    }

    if(ans <= 2) ans = -1;
    cout << ans << endl;

    return 0;
}