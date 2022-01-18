// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1611&lang=jp

#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()



using namespace std;

int dp[310][310];
int w[310];

int solve(int l, int r) {
    if(dp[l][r] != -1) return dp[l][r];
    if(abs(l-r) <= 1) return 0;
    int res = 0;

    if(abs(w[l] - w[r-1]) <= 1 && solve(l+1, r-1) == r-l-2) {
        res = r-l;
    }

    for(int mid = l+1; mid < r; mid++) {
        res = max(res, solve(l, mid) + solve(mid, r));
    }
    return dp[l][r] = res;
}

int main() {
    while(true) {
        int n;
        cin >> n;
        if(n == 0) break;
        for(int i = 0; i < n; i++) cin >> w[i];
        memset(dp, -1, sizeof(dp));
        cout << solve(0, n) << endl;
    }

    return 0;
}