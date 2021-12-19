#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

vector<int> ans;
vector<vector<int>> g;


void dfs(int now, int pre) {
    ans.push_back(now);
    for(auto next : g[now]) {
        if(next != pre) {
            dfs(next, now);
            ans.push_back(now);
        }
    }
}

int main() {
    int n;
    cin >> n;
    g.resize(n+1);
    for(int i = 0; i < n-1; i++) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    for(int i = 1; i <= n; i++) {
        sort(all(g[i]));
    }

    dfs(1, -1);

    for(auto x : ans) {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}