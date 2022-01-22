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
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            g[i][j].first = inf;
        }
    }
    for(int i = 0; i < (1 << n); i++) {
        for(int j = 1; j <= n; j++) {
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

    /*for(int i = 0; i < (1<<n); i++) {
        int num = i;
        vector<int> bit;
        for(int k = 0; k < n; k++) {
            bit.push_back(num % 2);
            num /= 2;
        }
        reverse(all(bit));
        for(auto x : bit) cout << x;
        cout << " ";
        for(int j = 0; j < n; j++) {
            cout << dp[i][j+1].second << " ";
        }
        cout << "\n";
    }*/
return 0;
}