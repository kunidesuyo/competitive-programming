#include <iostream>
#include <string.h>

const long long INF = __LONG_LONG_MAX__;

using namespace std;

void chmax(int& a, int b) {
    if(a < b) {
        a = b;
    }
    return;
}

int main() {
    string s, t;
    cin >> s >> t;

    int dp[s.size() + 1][t.size() + 1];
    for (int i = 0; i < s.size() + 1; i++) {
        for (int j = 0; j < t.size() + 1; j++) {
            dp[i][j] = 0;
        }
    }  

    for(int i = 0; i < s.size(); i++) {
        for (int j = 0; j < t.size(); j++) {
            if(s[i] == t[j]) {
                chmax(dp[i+1][j+1], dp[i][j] + 1);
            }
            chmax(dp[i+1][j+1], dp[i][j+1]);
            chmax(dp[i+1][j+1], dp[i+1][j]);
        }   
    }

    string result = "";
    int i = s.size();
    int j = t.size();

    while(i > 0 && j > 0) {
        if(dp[i][j] == dp[i-1][j]) {
            i--;
        } else if (dp[i][j] == dp[i][j-1]) {
            j--;
        } else {
            result = s[i-1] + result;
            i--;
            j--;
        }
    }

    cout << result << endl;

    return 0;
}