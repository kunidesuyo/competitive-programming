#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int a[n+1], b[n+1];
    for(int i = 1; i < n+1; i++) cin >> a[i] >> b[i];

    bool dp[n+1][x+1];
    for(int i = 0; i < n+1; i++) {
        for(int j = 0; j < x+1; j++) {
            dp[i][j] = false;
        }
    }
    dp[0][0] = true;

    for(int i = 1; i < n+1; i++) {
        for(int j = 0; j < x+1; j++) {
            if(dp[i-1][j] == true) {
                if(j+a[i] <= x) {
                    dp[i][j+a[i]] = true;
                }
                if(j+b[i] <= x) {
                    dp[i][j+b[i]] = true;
                }
            }
        }
    }

    if(dp[n][x]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    

    return 0;
}