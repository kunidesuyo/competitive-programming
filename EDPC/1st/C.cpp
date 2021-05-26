#include <iostream>
#define INF 1e9

using namespace std;

void chmax(int& a, int b) {
    if(b > a) {
        a = b;
    }
    return;
}

int main() {
    int N;
    cin >> N;
    int abc[N][3];
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> abc[i][j];
        }
    }

    int dp[N][3];
    for(int i = 0; i < 3; i++) {
        dp[0][i] = abc[0][i];
    }
    for(int i = 1; i < N; i++) {
        for(int j = 0; j < 3; j++) {
            dp[i][j] = 0;
        }
    }

    for(int i = 1; i < N; i++) {
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 3; k++) {
                if(j != k) {
                    chmax(dp[i][j], dp[i-1][k] + abc[i][j]);
                }
            }
        }
    }

    int max = dp[N-1][0];
    for(int i = 1; i < 3; i++) {
        if(max < dp[N-1][i]) {
            max = dp[N-1][i];
        }
    }

    cout << max << endl;

    return 0;
}