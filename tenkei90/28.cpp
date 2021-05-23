#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int tile[1009][1009];
    for(int i = 0; i < 1009; i++) {
        for(int j = 0; j < 1009; j++) {
            tile[i][j] = 0;
        }
    }
    for(int i = 0; i < n; i++) {
        int lx, ly, rx, ry;
        cin >> lx >> ly >> rx >> ry;
        tile[ly][lx]++;
        tile[ly][rx]--;
        tile[ry][lx]--;
        tile[ry][rx]++;
    }

    for(int y = 0; y < 1000; y++) {
        for(int x = 1; x < 1000; x++) {
            tile[y][x] += tile[y][x-1];
        }
    }

    for(int y = 1; y < 1000; y++) {
        for(int x = 0; x < 1000; x++) {
            tile[y][x] += tile[y-1][x];
        }
    }

    vector<int> area(n+1);

    for(int i = 0; i < 1000; i++) {
        for(int j = 0; j < 1000; j++) {
            area[tile[i][j]]++;
        }
    }

    for(int i = 1; i <= n; i++) {
        cout << area[i] << endl;
    }

    return 0;
}