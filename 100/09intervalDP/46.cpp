#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

long long inf = 1LL<<60;


using namespace std;

long long r[110], c[110];
long long dp[110][110];

long long solve(long long l, long long u) {
    if(dp[l][u] != -1) return dp[l][u];
    if(l+1 == u) {
        return dp[l][u] = r[l] * c[l] * c[u];
    }
    if(l == u) {
        return dp[l][u] = 0;
    }
    long long val = inf;

    for(long long mid = l; mid+1 <= u; mid++) {
        val = min(val, solve(l, mid) + solve(mid+1, u) + c[mid] * r[l] * c[u]);
    }
    return dp[l][u] = val;

}

int main() {
    long long n;
    cin >> n;
    for(long long i = 0; i < n; i++) cin >> r[i] >> c[i];
    memset(dp, -1, sizeof(dp));

    cout << solve(0, n-1) << endl;

    //for(long long i = 0; i < n; i++) cout << dp[0][i] << endl;

    return 0;
}