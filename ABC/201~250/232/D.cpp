#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  string c[h];
  for(int i = 0; i < h; i++) cin >> c[i];

  vector<vector<int>> d(h, vector<int>(w, 0));
  d[0][0] = 1;
  typedef pair<int, int> P;
  stack<P> s;
  s.push({0, 0});
  int dh[2] = {0, 1};
  int dw[2] = {1, 0};
  while(!s.empty()) {
    P now = s.top(); s.pop();
    int cost_now = d[now.first][now.second];
    for(int i = 0 ; i < 2; i++) {
      P next = {now.first + dh[i], now.second + dw[i]};
      if(next.first < h && next.second < w) {
        if(d[next.first][next.second] != 0) continue;
        if(c[next.first][next.second] == '.') {
          d[next.first][next.second] = cost_now + 1;
          s.push(next);
        }
      }
    }
  }
  int ans = -1;
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      ans = max(ans, d[i][j]);
    }
  }
  cout << ans << endl;
  
  return 0;
}