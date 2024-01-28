#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n, x, y;
  cin >> n >> x >> y;
  x--; y--;
  vector<vector<int>> g(n);
  for(int i = 0; i < n-1; i++) {
    int u, v;
    cin >> u >> v;
    u--; v--;
    g[u].push_back(v);
    g[v].push_back(u);
  }

  vector<int> ans;
  auto dfs = [&](auto f, int now, int p=-1) -> bool {
    if(now == x) {
      ans.push_back(now);
      return true;
    }
    for(int next : g[now]) {
      if(next == p) continue;
      if(f(f, next, now)) {
        ans.push_back(now);
        return true;
      }
    }
    return false;
  };
  dfs(dfs, y);

  for(int i = 0; i < ans.size(); i++) cout << ans[i]+1 << " ";
  cout << endl;

  return 0;
}