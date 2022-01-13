#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

const long long INF = 1LL<<60;

using namespace std;

int main() {
    long long v, e;
    cin >> v >> e;
    long long dp[v][v];
    for(long long i = 0; i < v; i++) {
        for(long long j = 0; j < v; j++) {
            if(i == j) dp[i][j] = 0;
            else dp[i][j] = INF;
        }
    }
    for(long long i = 0; i < e; i++) {
        long long s, t, d;
        cin >> s >> t >> d;
        dp[s][t] = d;
    }

    for(long long k = 0; k < v; k++) {
        for(long long i = 0; i < v; i++) {
            for(long long j = 0; j < v; j++) {
                if(dp[i][k] == INF || dp[k][j] == INF) continue;
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
            }
        }
    }

    for(long long i = 0; i < v; i++) {
        if(dp[i][i] < 0) {
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }

    for(long long i = 0; i < v; i++) {
        for(long long j = 0; j < v; j++) {
            if(j != 0) cout << " ";
            if(dp[i][j] == INF) cout << "INF";
            else cout << dp[i][j];
        }
        cout << "\n";
    }



    return 0;
}