#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    int sy, sx;
    cin >> sy >> sx;
    sy--; sx--;
    int gy, gx;
    cin >> gy >> gx;
    gy--; gx--;
    string s[r];
    for(int i = 0; i < r; i++) cin >> s[i];
    int ans[r][c];
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            ans[i][j] = -1;
        }
    }
    queue<pair<int, int>> q;
    q.push(make_pair(sy, sx));
    ans[sy][sx] = 0;

    int dy[4] = {1, 0, -1, 0};
    int dx[4] = {0, 1, 0, -1};

    while(!q.empty()) {
        pair<int, int> now = q.front();
        q.pop();
        for(int i = 0; i < 4; i++) {
            pair<int, int> next;
            next.first = now.first + dy[i];
            next.second = now.second + dx[i];
            if(0 <= next.first && next.first < r && 0 <= next.second && next.second < c) {
                if(s[next.first][next.second] == '.') {
                    if(ans[next.first][next.second] == -1) {
                        ans[next.first][next.second] = ans[now.first][now.second] + 1;
                        q.push(next);
                    }
                }
            }
        }
    }

    cout << ans[gy][gx] << endl;

    return 0;
}