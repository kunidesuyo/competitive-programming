#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

// class UnionFind {
// public:
// 	vector<int> par;

// 	void init(int sz) {
// 		par.resize(sz, -1);
// 	}
// 	int root(int pos) {
// 		if (par[pos] == -1) return pos;
// 		par[pos] = root(par[pos]);
// 		return par[pos];
// 	}
// 	void unite(int u, int v) {
// 		u = root(u); v = root(v);
// 		if (u == v) return;
// 		par[u] = v;
// 	}
// 	bool same(int u, int v) {
// 		if (root(u) == root(v)) return true;
// 		return false;
// 	}
// };

int main() {
  int n; 
  cin >> n;
  set<pair<int, int>> n_vis;
  bool xy[2005][2005];
  for(int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    x+=1000;
    y+=1000;
    xy[x][y] = true;
    n_vis.insert({x, y});
  }
  int ans = 0;
  int dx[6] = {-1, -1, 0, 0, 1, 1};
  int dy[6] = {-1, 0, -1, 1, 0, 1};
  while(n_vis.size() != 0) {
    stack<pair<int, int>> st;
    pair<int, int> start = *n_vis.rbegin();
    // cout << n_vis.size() << endl;
    ans++;
    st.push(start);
    while(!st.empty()) {
      pair<int, int> now = st.top(); st.pop();
      // cout << now.first << " " << now.second << " " << n_vis.size() << endl;
      n_vis.erase(now);
      for(int i = 0; i < 6; i++) {
        int next_x = now.first + dx[i];
        int next_y = now.second + dy[i];
        if(0 <= next_x && next_x <= 2000 && 0 <= next_y && next_y <= 2000) {
          pair<int, int> next = {next_x, next_y};
          if(xy[next.first][next.second] && n_vis.find(next) != n_vis.end()) {
            st.push(next);
          }
        }
      }
    }
  }
  cout << ans << endl;
   
  return 0;
}