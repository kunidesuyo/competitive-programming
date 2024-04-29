#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using namespace std;

struct edge {int to, cost;};
int INF = 1e9;
typedef pair<int, int> P;

int main() {
  int n, k;
  cin >> n >> k;
  vector<vector<edge>> g(n);
  for(int i = 0; i < k; i++) {
    int x;
    cin >> x;
    if(x == 0) {
      int a, b;
      cin >> a >> b;
      a--; b--;
      priority_queue<P, vector<P>, greater<P>> pq;
      vector<int> ds(n, INF);
      ds[a] = 0;
      pq.push({0, a});
      while(!pq.empty()) {
        P now = pq.top(); pq.pop();
        int cost = now.first;
        int pos = now.second;
        if(ds[pos] < cost) continue;
        for(auto ed : g[pos]) {
          if(ds[ed.to] > ds[pos] + ed.cost) {
            ds[ed.to] = ds[pos] + ed.cost;
            pq.push({ds[ed.to], ed.to});
          }
        }
      }
      if(ds[b] == INF) cout << -1 << endl;
      else cout << ds[b] << endl;
    } else if(x == 1) {
      int c, d, e;
      cin >> c >> d >> e;
      c--; d--;
      edge from_c = {d, e};
      edge from_d = {c, e};
      g[c].push_back(from_c);
      g[d].push_back(from_d);
    }
  }
  return 0;
}