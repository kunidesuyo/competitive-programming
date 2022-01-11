#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const int INF = INT_MAX / 2;

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
    }
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

using namespace std;

int main() {
    int n;
    cin >> n;
    int x, y;
    cin >> x >> y;
    int a[n+1], b[n+1];
    int tai = 0, tako = 0;
    for(int i = 1; i <= n; i++) {
        cin >> a[i] >> b[i];
        tako += a[i];
        tai += b[i];
    }


    if(!(tako >= x && tai >= y)) {
        cout << -1 << endl;
        return 0;
    }

    int dp[n+1][x+1][y+1];
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= x; j++) {
            for(int k = 0; k <= y; k++) {
                dp[i][j][k] = INF;
            }
        }
    }
    dp[0][0][0] = 0;

    for(int i = 1; i <= n; i++) {
        for(int j = 0; j <= x; j++) {
            for(int k = 0; k <= y; k++) {
                if(dp[i-1][j][k] < INF) {
                    chmin(dp[i][j][k], dp[i-1][j][k]);
                    chmin(dp[i][min(j+a[i], x)][min(k+b[i],y)], dp[i-1][j][k]+1);
                }
            }
        }
    }

    /*for(int i = 0; i <= n; i++) {
        cout << i << endl;
        for(int j = 0; j <= x; j++) {
            for(int k = 0; k <= y; k++) {
                cout << dp[i][j][k] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }*/

    cout << dp[n][x][y] << endl;


    return 0;
}