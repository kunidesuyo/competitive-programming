#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int x;
    cin >> x;

    int dp[100001];
    memset(dp, 0, sizeof(dp));

    dp[0] = 1;
    for(int i = 0; i <= 100000; i++) {
        if(dp[i] == 1) {
            for(int j = 0; j <= 5; j++) {
                if(i+100+j <= 100000) {
                    dp[i+100+j] = 1;
                }
            }
        }
    }

    if(dp[x] == 1) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}