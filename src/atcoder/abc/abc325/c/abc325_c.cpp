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
  string s[h];
  for (int i = 0; i < h; i++) cin >> s[i];
  vector<vector<bool>> v(h, vector<bool>(w, false));

  int ans = 0;
  int di[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
  int dj[8] = {1, 1, 1, 0, -1, -1, -1, 0};
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (s[i][j] == '#' && v[i][j] == false) {
        ans++;
        v[i][j] = true;
        stack<pair<int, int>> ss;
        ss.push({i, j});
        while (!ss.empty()) {
          pair<int, int> now = ss.top();
          ss.pop();
          for (int k = 0; k < 8; k++) {
            int ii = now.first + di[k];
            int jj = now.second + dj[k];
            if (!(0 <= ii && ii < h && 0 <= jj && jj < w)) continue;
            if (s[ii][jj] == '#' && v[ii][jj] == false) {
              v[ii][jj] = true;
              ss.push({ii, jj});
            }
          }
        }
      }
    }
  }

  cout << ans << endl;

  return 0;
}