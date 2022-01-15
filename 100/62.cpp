#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    int dp[10][10];
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            cin >> dp[i][j];
        }
    }

    for(int k = 0; k < 10; k++) {
        for(int i = 0; i < 10; i++) {
            for(int j = 0; j < 10; j++) {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
            }
        }
    }

    vector<int> c(10, 0);
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            int a;
            cin >> a;
            if(a != -1) c[a]++;
        }
    }

    int ans = 0;
    for(int i = 0; i < 10; i++) {
        ans += dp[i][1] * c[i];
    }
    cout << ans << endl;



    return 0;
}