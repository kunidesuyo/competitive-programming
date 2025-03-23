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
  int h, w;
  cin >> h >> w;
  string c[h];
  for (int i = 0; i < h; i++) cin >> c[i];
  vector<int> ans(200, 0);
  // int ans_i = 0;

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (c[i][j] != '#') continue;
      int dx[4] = {1, 1, -1, -1};
      int dy[4] = {1, -1, 1, -1};
      int n = 0;
      while (true) {
        bool ok = true;
        int target = n + 1;
        for (int k = 0; k < 4; k++) {
          int x = i + dx[k] * target;
          int y = j + dy[k] * target;
          if (!(0 <= x && x < h && 0 <= y && y < w)) {
            ok = false;
            break;
          }
          if (c[x][y] != '#') {
            ok = false;
            break;
          }
        }
        if (ok == false) break;
        n++;
      }
      if (n == 0) continue;
      // cout << i << " " << j << " " << n << endl;
      ans[n]++;
      // ans_i = max(ans_i, n);
    }
  }

  for (int i = 1; i <= min(h, w); i++) {
    if (i != 1) cout << " ";
    cout << ans[i];
  }
  cout << "\n";

  return 0;
}