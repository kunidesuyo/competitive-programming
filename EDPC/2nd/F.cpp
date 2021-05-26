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

int dp[3010][3010];


int main() {
    string s, t;
    cin >> s >> t;


    memset(dp, 0, sizeof(dp));
    for(int i = 0; i < s.size(); i++) {
        for(int j = 0; j < t.size(); j++) {
            if(s[i] == t[j]) {
                chmax(dp[i+1][j+1], dp[i][j] + 1);
            }
            chmax(dp[i+1][j+1], dp[i+1][j]);
            chmax(dp[i+1][j+1], dp[i][j+1]);
        }
    }

    //cout << dp[s.size()][t.size()] << endl;

    string ans = "";
    int i = (int)s.size(), j = (int)t.size();

    while(i > 0 && j > 0) {
        if(dp[i][j] == dp[i-1][j]) {
            i--;
        } else if (dp[i][j] == dp[i][j-1]) {
            j--;
        } else if(dp[i][j] == dp[i-1][j-1]+1) {
            ans = s[i-1] + ans;
            i--; j--;
        }
    }

    cout << ans << endl;
    

    return 0;
}