#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

const int max_n = 200009;

vector<int> g[max_n];
vector<bool> visited(max_n, false);
vector<int> value(max_n, 0);

int n, q;
int p[max_n], x[max_n];

void dfs(int s, int v) {
    visited[s] = true;
    if(s != 1) {
        value[s] += v;
    }
    for(auto x : g[s]) {
        if(visited[x] == true) continue;
        dfs(x, value[s]);
    }
}

int main() {
    cin >> n >> q;
    for(int i = 0; i < n-1; i++) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for(int i = 0; i < q; i++) {
        int p, x;
        cin >> p >> x;
        value[p] += x;
    }

    dfs(1,value[1]);

    for(int i = 1; i <= n; i++) {
        cout << value[i] << " ";
    }
    cout << "\n";

    return 0;
}