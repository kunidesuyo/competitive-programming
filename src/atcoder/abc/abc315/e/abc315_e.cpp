#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;
const ll INF = 1LL << 60;
const int inf = INT_MAX / 2;

int main() {
  int n;
  cin >> n;
  int c[n];
  vector<vector<int>> p(n, vector<int>());
  for (int i = 0; i < n; i++) {
    cin >> c[i];
    for (int j = 0; j < c[i]; j++) {
      int pp;
      cin >> pp;
      pp--;
      p[i].push_back(pp);
    }
  }

  vector<bool> visited(n);
  vector<int> ans;
  auto dfs = [&](auto dfs, int v) -> void {
    visited[v] = true;
    for (int u : p[v]) {
      if (visited[u]) continue;
      dfs(dfs, u);
    }
    ans.push_back(v);
  };

  dfs(dfs, 0);
  ans.pop_back();
  for (int v : ans) cout << v + 1 << " ";
  cout << endl;

  // vector<bool> visited(n, false);
  // stack<int> q;
  // q.push(0);
  // visited[0] = true;

  // // 重複あり
  // vector<int> ans;

  // ans.push_back(0);

  // while (!q.empty()) {
  //   int now = q.top();
  //   q.pop();
  //   for (auto next : p[now]) {
  //     if(visited[next] == true) continue;
  //     ans.push_back(next);
  //     q.push(next);
  //   }
  // }

  // vector<bool> d(n, false);
  // int ans_l = ans.size();

  // for (int i = ans_l - 1; i >= 0; i--) {
  //   if (d[ans[i]] == true) continue;
  //   if (ans[i] == 0) break;
  //   if (i != ans_l - 1) cout << " ";
  //   cout << ans[i] + 1;
  //   d[ans[i]] = true;
  // }
  // cout << "\n";

  return 0;
}