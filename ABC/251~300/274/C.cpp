#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> g(2*n+2);
  for(int i = 1; i <= n; i++) {
    int a;
    cin >> a;
    g[a].push_back(2*i);
    g[a].push_back(2*i + 1);
    g[2*i].push_back(a);
    g[2*i+1].push_back(a);
  }
  
  vector<bool> visited(2*n+2, false);
  vector<int> ans(2*n+2);
  auto dfs = [&](auto f, int now, int p, int cost) -> void {
    ans[now] = cost;
    visited[now] = true;
    for(auto next : g[now]) {
      if(next == p) continue;
      if(visited[next]) continue;
      f(f, next, now, cost+1);
    }
  };
  dfs(dfs, 1, -1, 0);
  for(int i = 1; i <= 2*n+1; i++) cout << ans[i] << endl;

  return 0;
}