#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using namespace std;
struct edge {int cost; int to;};
int INF = 2e9;
typedef pair<int, int> P;

int main() {
  int v, e, r;
  cin >> v >> e >> r;
  vector<vector<edge> > g(v);
  for(int i = 0; i < e; i++) {
    int s, t, d;
    cin >> s >> t >> d;
    edge ee = {d, t};
    g[s].push_back(ee);
  }
  // for(int i = 0; i < v; i++) {
  //   for(int j = 0; j < g[i].size(); j++) {
  //     cout << i << " " << g[i][j].to << " " << g[i][j].cost << endl;
  //   }
  // }
  vector<int> d(v, INF);
  priority_queue<P, vector<P>, greater<P> > pq;
  d[r] = 0;
  pq.push(P(0, r));

  while(!pq.empty()) {
    P p = pq.top(); pq.pop();
    int now = p.second;
    int cost = p.first;
    if(d[now] < cost) continue;
    for(int i = 0; i < g[now].size(); i++) {
      edge n_edge = g[now][i];
      if(d[n_edge.to] > d[now] + n_edge.cost) {
        d[n_edge.to] = d[now] + n_edge.cost;
        pq.push(P(d[n_edge.to], n_edge.to));
      }
    }
  }

  for(int i = 0; i < d.size(); i++) {
    int x = d[i];
    if(x == INF) cout << "INF" << endl;
    else cout << x << endl;
  }

  return 0;
}