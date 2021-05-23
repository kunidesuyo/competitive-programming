#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int h, w, x, y;
    cin >> h >> w >> x >> y;
    string s[h];
    for(int i = 0; i < h; i++) cin >> s[i];
    x--;
    y--;

    int ans = 0;
    for(int i = x; i >= 0; i--) {
        if(s[i][y] == '.') {
            ans++;
        } else {
            break;
        }
    }

    for(int i = x; i < h; i++) {
        if(s[i][y] == '.') {
            ans++;
        } else {
            break;
        }
    }

    for(int i = y; i >= 0; i--) {
        if(s[x][i] == '.') {
            ans++;
        } else {
            break;
        }
    }

    for(int i = y; i < w; i++) {
        if(s[x][i] == '.') {
            ans++;
        } else {
            break;
        }
    }

    cout << ans - 3 << endl;

    return 0;
}