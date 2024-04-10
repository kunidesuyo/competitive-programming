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
  bool ans = true;
  vector<bool> vis(n, false);
  for(int s = 0; s < n; s++) {
    if(vis[s] == true) continue;
    stack<int> st;
    set<int> c;
    c.insert(s);
    st.push(s);
    while(!st.empty()) {
      int now = st.top();
      st.pop();
      vis[now] = true;
      c.insert(now);
      for(auto next: g[now]) {
        if(vis[next] == true) continue;
        st.push(next);
      }
    }
    int x = 0;
    for(auto v: c) {
      x += g[v].size();
    }
    if((int)c.size()*2 == x) continue;
    else ans = false;
    if(ans == false) break;
  }
  if(ans) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  
  return 0;
}