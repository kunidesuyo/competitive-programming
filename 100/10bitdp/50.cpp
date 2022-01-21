#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int n, m;
using P = pair<ll, ll>;
P dp[(1<<16)+1][17];
P g[17][17];

P rec(int bit, int v) {
    if(dp[bit][v].first != -1) return dp[bit][v];
    if(bit == (1<<v)) {
        if(g[0][v].first <= g[0][v].second) {
            dp[bit][v].first = g[0][v].first;
            dp[bit][v].second = 1;
            return dp[bit][v];
        }
    }

    int prev_bit = bit & ~(1<<v);
    P res = make_pair(INF, 0);
    for(int u = 0; u < n; u++) {
        if(!(prev_bit & (1<<u))) continue;
        if(g[u][v].first == INF) continue;
        ll num;
        num = rec(prev_bit, u).first + g[u][v].first;
        if(num <= g[u][v].second) {
            if(res.first > num) {
                res.first = num;
                res.second = rec(prev_bit, u).second;
            } else if (res.first == num) {
                res.second += rec(prev_bit, u).second;
            }
        }
    }

    return dp[bit][v] = res;
}

int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            g[i][j].first = INF;
            g[i][j].second = 0;
        }
    }
    for(int i = 0; i < (1<<n); i++) {
        for(int j = 0; j < n; j++) {
            dp[i][j].first = -1;
            dp[i][j].second = 0;
        }
    }
    for(int i = 0; i < m; i++) {
        int s,t,d,x;
        cin >> s >> t >> d >> x;
        s--; t--;
        g[s][t].first = d;
        g[t][s].first = d;
        g[s][t].second = x;
        g[t][s].second = x;
    }


    P ans = rec((1<<n)-1, 0);
    if(ans.first == INF) cout << "IMPOSSIBLE" << endl;
    else cout << ans.first << " " << ans.second << endl;


    return 0;
}