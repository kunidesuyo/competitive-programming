#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int n;
ll h[100010];
ll dp[100010];

ll rec(int i) {
    if(dp[i] < INF) return dp[i];

    if(i == 0) return 0;

    ll res = INF;
    chmin(res, rec(i-1) + abs(h[i] - h[i-1]));
    if(i > 1) chmin(res, rec(i-2) + abs(h[i] - h[i-2]));

    return dp[i] = res;
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> h[i];

    for(int i = 0; i < 100010; i++) dp[i] = INF;

    cout << rec(n-1) << endl;

    return 0;
}