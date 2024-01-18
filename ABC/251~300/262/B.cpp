#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  // vector<vector<int>> uv;
  bool g[n][n];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      g[i][j] = false;
    }
  }
  for(int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    u--;
    v--;
    g[u][v] = true;
    g[v][u] = true;
    // uv[u].push_back(v);
    // uv[v].push_back(u);
  }

  int ans = 0;
  for(int i = 0; i < n; i++) {
    for(int j = i+1; j < n; j++) {
      for(int k = j+1; k < n; k++) {
        if(g[i][j] && g[j][k] && g[k][i]) ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}