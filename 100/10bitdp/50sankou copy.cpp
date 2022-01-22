#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;
P dp[(1 << 16)][17];
P g[17][17];
ll inf = 10000000000000;
int n;
#define all(x) (x).begin(),(x).end()

P solve(int bit, int u) {
    if(dp[bit][u].first != -1) return dp[bit][u];
    if(bit == (1 << u)) {
        dp[bit][u].first = g[0][u].first;
        dp[bit][u].second = 1;
        return dp[bit][u];
    }
    int pre_bit = bit ^ #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;
P dp[(1 << 16)][17];
P g[17][17];
ll inf = 10000000000000;
int n;
#define all(x) (x).begin(),(x).end()

P solve(int bit, int u) {
    if(dp[bit][u].first != -1) return dp[bit][u];
    if(bit == (1 << (u - 1))) {
        dp[bit][u].first = g[1][u].first;
        dp[bit][u].second = 1;
        return dp[bit][u];
    }
    int pre_bit = bit ^ (1 << (u - 1));
    P res = make_pair(inf, 0);
    for(int i = 1; i <= n; i++) {
        if(!(pre_bit & (1 << (i - 1)))) continue;
        ll num = solve(pre_bit, i).first + g[i][u].first;
        if(num <= g[i][u].second) {
            if(res.first > num) {
                res.first = num;
                res.second = solve(pre_bit, i).second;
            } else if (res.first == num) {
                res.second += solve(pre_bit, i).second;
            }
        }

        /*if(res.first > solve(pre_bit, i).first + g[i][u].first && solve(pre_bit, i).first + g[i][u].first <= g[i][u].second) {
            res.first = solve(pre_bit, i).first + g[i][u].first;
            res.second = solve(pre_bit, i).second;
        } else if(res.first == solve(pre_bit, i).first + g[i][u].first && solve(pre_bit, i).first + g[i][u].first <= g[i][u].second) {
            res.second += solve(pre_bit, i).second;
        }*/
    }
    return dp[bit][u] = res;
}

int main(){
    int m, a, b;
    cin >> n >> m;
    for(int i = 1; i <= 16; i++) {
        for(int j = 1; j <= 16; j++) {
            g[i][j].first = inf;
        }
    }
    for(int i = 0; i < (1 << 16); i++) {
        for(int j = 1; j <= 16; j++) {
            dp[i][j].first = -1;
            dp[i][j].second = 0;
        }
    }
    for(int i = 0; i < m; i++) {
        cin >> a >> b >> g[a][b].first >> g[a][b].second;
        g[b][a].first = g[a][b].first;
        g[b][a].second = g[a][b].second;
    }
    P ans;
    ans = solve((1 << n) - 1, 1);
    if(ans.first != inf) cout << ans.first << " " << ans.second << endl;
    else cout << "IMPOSSIBLE" << endl;

return 0;
}(1 << u);
    P res = make_pair(inf, 0);
    for(int i = 0; i < n; i++) {
        if(!(pre_bit & (1 << i))) continue;
        ll num = solve(pre_bit, i).first + g[i][u].first;
        if(num <= g[i][u].second) {
            if(res.first > num) {
                res.first = num;
                res.second = solve(pre_bit, i).second;
            } else if (res.first == num) {
                res.second += solve(pre_bit, i).second;
            }
        }

        /*if(res.first > solve(pre_bit, i).first + g[i][u].first && solve(pre_bit, i).first + g[i][u].first <= g[i][u].second) {
            res.first = solve(pre_bit, i).first + g[i][u].first;
            res.second = solve(pre_bit, i).second;
        } else if(res.first == solve(pre_bit, i).first + g[i][u].first && solve(pre_bit, i).first + g[i][u].first <= g[i][u].second) {
            res.second += solve(pre_bit, i).second;
        }*/
    }
    return dp[bit][u] = res;
}

int main(){
    int m, a, b;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            g[i][j].first = inf;
        }
    }
    for(int i = 0; i < (1 << n); i++) {
        for(int j = 0; j < n; j++) {
            dp[i][j].first = -1;
            dp[i][j].second = 0;
        }
    }
    for(int i = 0; i < m; i++) {
        int s, t, d, x;
        cin >> s >> t >> d >> x;
        s--; t--;
        g[s][t].first = d;
        g[t][s].first = d;
        g[s][t].second = x;
        g[t][s].second = x;
    }
    P ans;
    ans = solve((1 << n) - 1, 0);
    if(ans.first != inf) cout << ans.first << " " << ans.second << endl;
    else cout << "IMPOSSIBLE" << endl;


return 0;
}