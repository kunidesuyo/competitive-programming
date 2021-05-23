#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;


int main() {
    int h, w;
    cin >> h >> w;
    string s[h];
    for(int i = 0; i < h; i++) cin >> s[i];

    int dx[4] = {0, 1, 0, 1};
    int dy[4] = {0, 0, 1, 1};

    int ans = 0;

    for(int i = 0; i < h - 1; i++) {
        for(int j = 0; j < w-1; j++) {
            int count = 0;
            for(int k = 0; k < 4; k++) {
                if(s[i+dx[k]][j+dy[k]] == '#') count++;
            }
            if(count % 2 == 1) ans++;
        }
    }
    
    cout << ans << endl;


    return 0;
}