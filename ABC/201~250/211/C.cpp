#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    string s;
    cin >> s;
    ll n = s.length();

    ll dp[n+1][9];

    string t = "chokudai";

    for(int i = 0; i <= n; i++) {
        dp[i][0] = 1;
    }

    for(int j = 1; j <= 8; j++) {
        dp[0][j] = 0;
    }

    ll mod = 1000000000 + 7;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 8; j++) {
            if(s[i] == t[j]) {
                dp[i+1][j+1] = dp[i][j+1] + dp[i][j];
            } else {
                dp[i+1][j+1] = dp[i][j+1];
            }
            dp[i+1][j+1] %= mod;
        }
    }

    cout << dp[n][8] << endl;

    return 0;
}