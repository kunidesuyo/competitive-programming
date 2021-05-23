#include <iostream>
#define INF 1e9

using namespace std;

void chmax(long long int& a, long long int b) {
    if(b > a) {
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

    long long int dp[N+1][W+1];
    for(int i = 0; i < N+1; i++) {
        for(int j = 0; j < W+1; j++) {
            dp[i][j] = 0;
        }
    }

    for(int i = 0; i < N; i++) {
        for(int sum_w = 0; sum_w <= W; sum_w++) {
            if(sum_w - weight[i] >= 0) {
                chmax(dp[i+1][sum_w], dp[i][sum_w - weight[i]] + value[i]);
            }
            chmax(dp[i+1][sum_w], dp[i][sum_w]);
        }
    }

    cout << dp[N][W] << endl;

    return 0;
}