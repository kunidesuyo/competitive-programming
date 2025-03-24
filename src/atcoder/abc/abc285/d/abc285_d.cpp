#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;
const ll INF = 1LL << 60;
const int inf = INT_MAX / 2;

bool dfs(map<string, vector<string>> &g, string start,
         map<string, bool> &seen, map<string, bool> &finished) {
  seen[start] = true;
  for (auto next : g[start]) {
    if(finished[next]) continue;
    if(seen[next] && !finished[next]) return true;
    if(dfs(g, next, seen, finished)) return true;
  }
  finished[start] = true;
  return false;
}

int main() {
  int n;
  cin >> n;
  map<string, vector<string>> g;
  set<string> st;
  for (int i = 0; i < n; i++) {
    string s, t;
    cin >> s >> t;
    st.insert(s);
    st.insert(t);
    g[s].push_back(t);
  }
  
  map<string, bool> seen, finished;
  for (auto item : st) {
    seen[item] = false;
    finished[item] = false;
  }
  
  for (auto start : st) {
    if (seen[start] == true) continue;
    bool result = dfs(g, start, seen, finished);
    if(result) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;

  return 0;
}