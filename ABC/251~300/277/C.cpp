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
  map<int, vector<int>> g;
  for(int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    a--; b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  set<int> ss;
  stack<int> s;
  s.push(0);
  int now = 0;
  ss.insert(0);
  while(!s.empty()) {
    now = s.top();
    s.pop();
    for(auto next : g[now]) {
      if(ss.count(next) == 1) continue;
      s.push(next);
      ss.insert(next);
    }
  }
  cout << *ss.rbegin()+1 << endl;
  
  return 0;
}