#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }   
    int m;
    cin >> m;
    int xy[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            xy[i][j] = 0;
        }
    } 
    for(int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        xy[x][y] = 1;
        xy[y][x] = 1;
    }
    int ans = 1000 * 1000;

    int order[n];
    for(int i = 0; i < n; i++) order[i] = i;

    do {
        int time = 0;
        for(int i = 0; i < n; i++) {
            time += a[order[i]][i];
            if(i != 0) {
                if(xy[order[i-1]][order[i]] == 1) {
                    time = -1;
                }
            }
            if(time == -1) break;
        }
        if(time != -1) ans = min(ans, time);

    } while(next_permutation(order, order+n));

    if(ans == 1000 * 1000) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }


    return 0;
}