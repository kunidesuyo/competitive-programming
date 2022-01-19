#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()


const int inf = INT_MAX / 2;

using namespace std;

int v, e;
int dist[16][16];
int dp[(1<<15)+1][16];

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
    }
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

int solve(int bit, int t) {
    // solve((1<<v)-1, 0)で呼び出す
    // それだとprev_bitで始点の0が消える
    if(dp[bit][t] != -1) return dp[bit][t];
    if(bit == 1<<t) {
        //cout << bit << " " << t << endl;
        //cout << dist[0][t] << endl;
        return dp[bit][t] = dist[0][t];
    }
    
    int prev_bit = bit & ~(1<<t);

    int val = inf;

    for(int s = 0; s < v; s++) {
        if(!((1<<s) & prev_bit)) continue;
        if(dist[s][t] == inf) continue;
        chmin(val, solve(prev_bit, s) + dist[s][t]);
    }
    //cout << t << " " << val << endl;
    return dp[bit][t] = val;
}

int main() {
    cin >> v >> e;
    //memset(dist, inf, sizeof(dist));
    for(int i = 0; i < v; i++) {
        for(int j = 0; j < v; j++) {
            dist[i][j] = inf;
        }
    }
    /*for(int i = 0; i < v; i++) {
        for(int j = 0; j < v; j++) {
            if(dist[i][j] == inf) cout << "INF ";
            else cout << dist[i][j] << " ";
        }
        cout << "\n";
    }*/
    for(int i = 0; i < e; i++) {
        int s, t, d;
        cin >> s >> t >> d;
        dist[s][t] = d;
    }
    /*for(int i = 0; i < v; i++) {
        for(int j = 0; j < v; j++) {
            if(dist[i][j] == inf) cout << "INF ";
            else cout << dist[i][j] << " ";
        }
        cout << "\n";
    }*/
    memset(dp, -1, sizeof(dp));

    int ans = inf;
    chmin(ans, solve((1<<v)-1, 0));
    
    /*for(int i = 0; i < (1<<v); i++) {
        int num = i;
        vector<int> bit;
        for(int k = 0; k < v; k++) {
            bit.push_back(num % 2);
            num /= 2;
        }
        reverse(all(bit));
        for(auto x : bit) cout << x;
        cout << " ";
        for(int j = 0; j < v; j++) {
            cout << dp[i][j] << " ";
        }
        cout << "\n";
    }*/
    if(ans == inf) cout << -1 << endl;
    else cout << ans << endl;
    

    return 0;
}