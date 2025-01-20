#include <bits/stdc++.h>

#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;
const ll INF = 1LL << 60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  string s[h];
  for (int i = 0; i < h; i++) cin >> s[i];
  char t[5] = {'s', 'n', 'u', 'k', 'e'};
  pair<int, int> d[8] = {{0, 1}, {0, -1},  {1, 0},  {-1, 0},
                         {1, 1}, {-1, -1}, {-1, 1}, {1, -1}};

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      for (int k = 0; k < 8; k++) {
        bool ok = true;
        for (int l = 0; l < 5; l++) {
          int ii = i + d[k].first * l;
          int jj = j + d[k].second * l;
          if (ii < 0 || h <= ii || jj < 0 || w <= jj) {
            ok = false;
            break;
          }
          if (s[ii][jj] == t[l]) {
            continue;
          } else {
            ok = false;
            break;
          }
        }
        if (ok) {
          for (int l = 0; l < 5; l++) {
            cout << i + 1 + d[k].first * l << " " << j + 1 + d[k].second * l
                 << endl;
          }
          return 0;
        }
      }
    }
  }

  return 0;
}