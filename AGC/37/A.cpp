#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

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

int main() {
    string s;
    cin >> s;
    int n = s.length();
    vector<vector<int>> dp(n+1, vector<int>(5, -1));
    dp[0][0] = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= min(i,4); j++) {
            string suf = s.substr(i-j, j);
            for(int add = 1; add <= 4 && i + add <= n; add++) {
                if(s.substr(i,add) != suf) {
                    chmax(dp[i+add][add], dp[i][j]+1);
                }
            }
        }
    }

    /*for(int i = 0; i <= n; i++) {
        for(int j = 0; j < 5; j++) {
            cout << dp[i][j] << " ";
        }
        cout << "\n";
    }*/

    int ans = dp[n][1];
    for(int i = 2; i < 5; i++) {
        ans = max(ans, dp[n][i]);
    }

    cout << ans << endl;

    return 0;
}