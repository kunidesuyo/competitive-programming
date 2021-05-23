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

    int dp[h][w];
    if(s[0][0] == '.') {
        dp[0][0] = 0;
    } else {
        dp[0][0] = 1;
    }
    
    for(int i = 1; i < h; i++) {
        if(s[i-1][0] == '.' && s[i][0] == '#') {
            dp[i][0] = dp[i-1][0] + 1;
        } else {
            dp[i][0] = dp[i-1][0];
        }
    }

    for(int i = 1; i < w; i++) {
        if(s[0][i-1] == '.' && s[0][i] == '#') {
            dp[0][i] = dp[0][i-1] + 1;
        } else {
            dp[0][i] = dp[0][i-1];
        }
    }

    for(int i = 1; i < h; i++) {
        for(int j = 1; j < w; j++) {
            int down = dp[i-1][j];
            if(s[i-1][j] == '.' && s[i][j] == '#') down++;
            int right = dp[i][j-1];
            if(s[i][j-1] == '.' && s[i][j] == '#') right++;
            dp[i][j] = min(down, right);
        }
    }

    cout << dp[h-1][w-1] << endl;

    return 0;
}