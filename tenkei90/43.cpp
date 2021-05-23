#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

struct state {
    int x, y, dir;
};

int main() {
    int h, w;
    cin >> h >> w;
    int sx, sy, gx, gy;
    cin >> sx >> sy >> gx >> gy;
    sx--; sy--; gx--; gy--;
    string s[h];
    for(int i = 0; i < h; i++) cin >> s[i];

    int inf = 1000 * 10000;

    int dist[h][w][4];
    for(int i = 0 ; i < h; i++) {
        for(int j = 0; j < w; j++) {
            for(int k = 0; k < 4; k++) {
                dist[i][j][k] = inf;
            }
        }
    }

    deque<state> deq;
    for(int i = 0; i < 4; i++) {
        dist[sx][sy][i] = 0;
        deq.push_back({sx, sy, i});
    }

    int dx[4] = { 1, 0, -1, 0 };
    int dy[4] = { 0, 1, 0, -1 };

    while(!deq.empty()) {
        state u = deq.front(); deq.pop_front();
        for(int i = 0; i < 4; i++) {
            int tx = u.x + dx[i];
            int ty = u.y + dy[i];
            int cost = dist[u.x][u.y][u.dir];
            if(u.dir != i) cost++;
            if(0<=tx && tx<h && 0<=ty && ty<w && s[tx][ty]=='.' && dist[tx][ty][i] > cost) {
                dist[tx][ty][i] = cost;
                if(u.dir != i) {
                    deq.push_back({tx, ty, i});
                } else {
                    deq.push_front({tx, ty, i});
                }
            }
        }
    }

    int ans = inf;
    for(int i = 0; i < 4; i++) {
        ans = min(ans, dist[gx][gy][i]);
    }

    cout << ans << endl;


    return 0;
}