#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

vector<bool> vis;
vector<vector<int>> g;

void dfs(int s) {
  vis[s] = true;
  for(auto next: g[s]) {
    if(vis[next]) continue;
    dfs(next);
  }
}

int main() {
  int n, m;
  cin >> n >> m;
  g.resize(n);
  for(int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    u--; v--;
    g[u].push_back(v);
    g[v].push_back(u);
  }

  int ans = 0;
  vis.resize(n);
  for(int s = 0; s < n; s++) {
    if(!vis[s]) ans++, dfs(s);
  }
  cout << ans << endl;
  
  return 0;
}