#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int h, w;
string s[29];
int maze[29][29];

void init_maze() {
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            maze[i][j] = -1;
        }
    }
}

int search_max() {
    int maxi = 0;
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            maxi = max(maxi, maze[i][j]);
        }
    }
    return maxi;
}

void print_maze() {
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            cout << maze[i][j] << " ";
        }
        cout << "\n";
    }
}

void bfs(int x, int y) {
    maze[x][y] = 0;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    queue<pair<int, int>> q;
    q.push(make_pair(x, y));
    while(!q.empty()) {
        tie(x,y) = q.front();
        q.pop();
        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 || nx > h || ny < 0 || ny > w || s[nx][ny] == '#') {
                continue;
            }
            if(maze[nx][ny] == -1) {
                q.push(make_pair(nx, ny));
                maze[nx][ny] = maze[x][y] + 1;
            }
        }
    }

}

int main() {
    cin >> h >> w;
    for(int i = 0; i < h; i++) cin >> s[i];

    int ans = 0;

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            if(s[i][j] == '#') continue;
            init_maze();
            bfs(i, j);
            //print_maze();
            ans = max(ans, search_max());
        }
    }

    cout << ans << endl;
    

    return 0;
}