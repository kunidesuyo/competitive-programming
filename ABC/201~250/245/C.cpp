#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int n, kk;
    cin >> n >> kk;
    int ab[2][n];
    for(int i = 0; i < n; i++) cin >> ab[0][i];
    for(int i = 0; i < n; i++) cin >> ab[1][i];

    bool dp[2][n];
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < n; j++) {
            dp[i][j] = false;
        }
    }
    dp[0][0] = true;
    dp[1][0] = true;

    for(int i = 1; i < n; i++) {
        for(int j = 0; j < 2; j++) {
            if(dp[j][i-1] == true) {
                for(int k = 0; k < 2; k++) {
                    // cout << "jk" << j << " " << k << endl;
                    // cout << ab[j][i-1] << " " << ab[k][i] << endl;
                    // cout << "abs" << abs(ab[j][i-1] - ab[k][i]) << endl;
                    if(abs(ab[j][i-1] - ab[k][i]) <= kk) {
                        dp[k][i] = true;
                    }
                }
            }
        }
    }
    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < 2; j++) {
    //         if(dp[j][i] == true) {
    //             cout << 1 << " ";
    //         } else {
    //             cout << 0 << " ";
    //         }
    //     }
    //     cout << "\n";
    // }
    if(dp[0][n-1] == true || dp[1][n-1] == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }


    return 0;
}