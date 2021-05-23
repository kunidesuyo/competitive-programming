#include <iostream>
#define INF 1e9

using namespace std;

int abs(int a) {
    if(a < 0) {
        return -a;
    }
    return a;
}

void chmin(int& a, int b) {
    if(a > b) {
        a = b;
    }
    return;
}

int main() {
    int N;
    cin >> N;
    int h[N];
    for(int i = 0; i< N; i++) cin >> h[i];
    int dp[N];
    dp[0] = 0;
    for(int i = 1; i < N; i++) dp[i] = INF;

    for(int i = 1; i < N; i++) {
        chmin(dp[i], dp[i-1] + abs(h[i] - h[i-1]));
        if(i > 1) chmin(dp[i], dp[i-2] + abs(h[i] - h[i-2]));
    }

    cout << dp[N-1] << endl;

    return 0;
}