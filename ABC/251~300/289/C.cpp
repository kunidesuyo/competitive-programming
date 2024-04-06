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
  vector<vector<int>> x(m);
  for(int i = 0; i < m; i++) {
    int c;
    cin >> c;
    for(int j = 0; j < c; j++) {
      int a;
      cin >> a;
      a--;
      x[i].push_back(a);
    }
  }
  int ans = 0;
  for(int bit = 0; bit < 1<<m; bit++) {
    vector<bool> e(n, false);
    for(int i = 0; i < m; i++) {
      if(1<<i & bit) {
        for(auto now: x[i]) {
          e[now] = true;
        }
      }
    }
    bool ok = true;
    for(int i = 0; i < n; i++) {
      if(e[i] == false) ok = false;
    }
    if(ok) ans++;
  }

  cout << ans << endl;
  return 0;
}