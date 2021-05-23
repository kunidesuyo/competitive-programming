#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int h, w, k;
    cin >> h >> w >> k;
    string s[h];
    for(int i = 0; i < h; i++) cin >> s[i];

    int ans[h][w];

    int now_berry = 1;
    int first_line = -1;

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            if(s[i][j] == '#') {
                if(first_line == -1) first_line = i;
                ans[i][j] = now_berry;
                now_berry++;
            }
        }
        if(now_berry > k) break;
    }

    now_berry = 1;
    int null_line = 0;
    for(int i = 0; i < h; i++) {
        bool ex = false;
        int first_berry = -1;
        for(int j = 0; j < w; j++) {
            if(s[i][j] == '#') {
                if(first_berry == -1) first_berry = j;
                ex = true;
            }
        }
        if(ex) {
            for(int j = 0; j <= first_berry; j++) {
                ans[i][j] = now_berry;
            }
            for(int j = first_berry+1; j < w; j++) {
                if(s[i][j] == '.') {
                    ans[i][j] = now_berry;
                } else {
                    now_berry++;
                    ans[i][j] = now_berry;
                }
            }
            now_berry++;
        } else {
            if(i >= first_line) {
                for(int j = 0; j < w; j++) {
                    ans[i][j] = ans[i-1][j];
                }
            }
        }
    }

    for(int i = first_line-1; i >= 0; i--) {
        for(int j = 0; j < w; j++) {
            ans[i][j] = ans[i+1][j];
        }
    }

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}