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

  int a[2] = {1000, 1000};
  int d[2] = {-1, -1};
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (s[i][j] == '#') {
        a[0] = min(a[0], i);
        a[1] = min(a[1], j);
        d[0] = max(d[0], i);
        d[1] = max(d[1], j);
      }
    }
  }
  int x = 0;
  for (int i = a[0]; i <= d[0]; i++) {
    for (int j = a[1]; j <= d[1]; j++) {
      if (s[i][j] == '.') {
        cout << i + 1 << " " << j + 1 << endl;
      }
    }
  }

  return 0;
}