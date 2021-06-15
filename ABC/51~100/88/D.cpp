#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    string s[h];
    for(int i = 0; i < h; i++) {
        cin >> s[i];
    }

    int dist[h][w];
    bool visited[h][w];
    int num_white = 0;
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            visited[i][j] = false;
            if(s[i][j] == '.') num_white++;
        }
    }
    visited[0][0] = true;
    dist[0][0] = 1;
    dist[h-1][w-1] = -1;

    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};

    queue<pair<int, int>> q;
    q.push(make_pair(0, 0));
    while(!q.empty()) {
        pair<int, int> index;
        index = q.front(); q.pop();
        int x1 = index.first;
        int y1 = index.second;
        for(int i = 0; i < 4; i++) {
            int x2 = x1 + dx[i];
            int y2 = y1 + dy[i];
            if(0<=x2&&x2<h&&0<=y2&&y2<w&&visited[x2][y2]==false&&s[x2][y2]=='.') {
                visited[x2][y2] = true;
                dist[x2][y2] = dist[x1][y1] + 1;
                q.push(make_pair(x2, y2));
            }
        }
    }

    if(dist[h-1][w-1] == -1) {
        cout << -1 << endl;
        return 0;
    } else {
        cout << num_white - dist[h-1][w-1] << endl;
    }



    return 0;
}