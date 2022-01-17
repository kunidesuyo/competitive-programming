#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int mod = 998244353;
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int dp[n][10];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 10; j++) {
            dp[i][j] = 0;
        }
    }
    dp[0][a[0]] = 1;
    /*cout << "----------------" << endl;
    for(int i = 0; i < 10; i++) {
        cout << dp[0][i] << endl;
    }*/

    for(int i = 1; i < n; i++) {
        for(int j = 0; j < 10; j++) {
            int num = (a[i] + j) % 10;
            dp[i][num] += dp[i-1][j];
            dp[i][num] %= mod;
            num = (a[i] * j) % 10;
            dp[i][num] += dp[i-1][j];
            dp[i][num] %= mod;
        }
        /*cout << "----------------" << endl;
        for(int j = 0; j < 10; j++) {
            cout << dp[i][j] << endl;
        }*/
    }

    for(int i = 0; i < 10; i++) {
        cout << dp[n-1][i] << endl;
    }

    return 0;
}