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
    int n;
    cin >> n;
    int t[n+1];
    int total = 0;
    for(int i = 1; i <= n; i++) {
        cin >> t[i];
        total += t[i];
    }

    bool dp[n+1][total+1];
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= total; j++) {
            dp[i][j] = false;
        }
    }
    dp[0][0] = true;

    for(int i = 1; i <= n; i++) {
        for(int j = 0; j <= total; j++) {
            if(j - t[i] >= 0) {
                if(dp[i-1][j-t[i]] == true) {
                    dp[i][j] = true;
                }
            }
            if(dp[i-1][j] == true) {
                dp[i][j] = true;
            }
        }
    }

    int s = total / 2;
    if(total % 2 != 0) s++;

    int ans;
    for(int i = s; i <= total; i++) {
        if(dp[n][i] == true) {
            ans = i;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}