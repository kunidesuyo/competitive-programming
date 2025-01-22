#include <bits/stdc++.h>

#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;
const ll INF = 1LL << 60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int a[m][n];
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
      a[i][j]--;
    }
  }

  bool friendly[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      friendly[i][j] = false;
    }
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n - 1; j++) {
      int x = a[i][j];
      int y = a[i][j + 1];
      friendly[x][y] = true;
      friendly[y][x] = true;
    }
  }

  int ans = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (friendly[i][j] == false) ans++;
    }
  }
  cout << ans << endl;
  return 0;
}