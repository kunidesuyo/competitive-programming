#include <iostream>
const long long INF = 1LL<<60;

using namespace std;

void chmin(long long int& a, long long int b) {
    if(b < a) {
        a = b;
    }
    return;
}

int main() {
    int N, W;
    cin >> N >> W;
    long long int weight[N], value[N];
    for(int i = 0; i < N; i++) {
        cin >> weight[i] >> value[i];
    }

    int max_v = 1000 * 100;

    long long int dp[N+1][max_v+1];
    for(int i = 0; i < N+1; i++) {
        for(int j = 0; j < max_v+1; j++) {
            dp[i][j] = INF;
        }
    }

    dp[0][0] = 0;
    
    for(int i = 0; i < N; i++) {
        for(int sum_v = 0; sum_v <= max_v; sum_v++) {
            if(sum_v - value[i] >= 0) {
                chmin(dp[i+1][sum_v], dp[i][sum_v - value[i]] + weight[i]);
            }
            chmin(dp[i+1][sum_v], dp[i][sum_v]);
        }
    }

    long long int result = 0;

    for(int sum_v = 0; sum_v < max_v + 1; sum_v++) {
        if(dp[N][sum_v] <= W) result = sum_v;
    }

    cout << result << endl;

    return 0;
}