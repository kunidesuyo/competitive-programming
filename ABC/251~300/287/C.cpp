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
  vector<vector<int>> g(n);
  for(int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    u--; v--;
    g[u].push_back(v);
    g[v].push_back(u);
  }

  if(m != n-1) {
    cout << "No" << endl;
    return 0;
  }

  for(auto gg: g) {
    if(gg.size() > 2) {
      cout << "No" << endl;
      return 0;
    }
  }

  stack<int> s;
  vector<bool> vis(n, false);
  s.push(0);
  while(!s.empty()) {
    int now = s.top();
    s.pop();
    vis[now] = true;
    for(auto next: g[now]) {
      if(vis[next] == false) s.push(next);
    }
  }
  
  for(auto v: vis) {
    if(v == false) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}