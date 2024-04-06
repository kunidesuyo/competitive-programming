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
    int a;
    cin >> a;
    g[a-1].push_back(a);
    g[a].push_back(a-1);
  }

  vector<bool> r(n, true);
  vector<bool> vis(n, false);
  while(true) {
    int start = -1;
    for(int i = 0; i < n; i++) {
      if(r[i]) {
        start = i;
        break;
      }
    }
    if(start == -1) break;
    stack<int> s;
    s.push(start);
    vector<int> out;
    while(!s.empty()) {
      int now = s.top();
      s.pop();
      vis[now] = true;
      out.push_back(now);
      r[now] = false;
      for(auto next: g[now]) {
        if(vis[next] == false) {
          s.push(next);
        }
      }
    }
    sort(out.rbegin(), out.rend());
    for(auto o: out) {
      cout << o+1 << " ";
    }
  }
  cout << "\n";


  return 0;
}