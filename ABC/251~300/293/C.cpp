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
  int n = h + w - 2;
  int a[h][w];
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      cin >> a[i][j];
    }
  }
  int ans = 0;
  for(int bit = 0; bit < 1<<n; bit++) {
    set<int> s;
    int x=0;
    int y=0;
    s.insert(a[x][y]);
    bool fun = true;
    for(int i = 0; i < n; i++) {
      if(bit & 1<<i) {
        x++;
      } else {
        y++;
      }
      if(x >= h || y >= w) {
        fun = false;
        break;
      }
      if(s.find(a[x][y]) == s.end()) {
        s.insert(a[x][y]);
      } else {
        fun = false;
        break;
      }
    }
    if(fun) ans++;
  }
  cout << ans << endl;
  return 0;
}