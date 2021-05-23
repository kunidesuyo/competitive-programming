#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

vector<int> color;
vector<vector<int>> to;
vector<int> cnt;
vector<int> ans;

void dfs(int v, int p = -1) {
    if(cnt[color[v]] == 0) ans.push_back(v+1);
    cnt[color[v]]++;
    for(int u : to[v]) {
        if(u == p) continue;
        dfs(u, v);
    }
    cnt[color[v]]--;
}

int main() {
    int n;
    cin >> n;
    color = vector<int>(n);
    for(int i = 0; i < n; i++) cin >> color[i];
    to.resize(n);
    for(int i = 0; i < n-1; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        to[a].push_back(b);
        to[b].push_back(a);
    }
    cnt = vector<int>(100001);
    dfs(0);
    sort(ans.begin(), ans.end());
    for(int v : ans) cout << v << endl;
    return 0;
}