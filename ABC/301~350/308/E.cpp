#include <bits/stdc++.h>

#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;
const ll INF = 1LL << 60;
const int inf = INT_MAX / 2;

using namespace std;

int c(int i, int j, int k) {
  for (int u = 0; u < 3; u++) {
    if (u == i || u == j || u == k)
      continue;
    else
      return u;
  }
  return 3;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  string s;
  cin >> s;

  vector<vector<int>> m(3, vector<int>(n + 1)), x(3, vector<int>(n + 1));
  m[0][0] = 0;
  m[1][0] = 0;
  m[2][0] = 0;
  x[0][0] = 0;
  x[1][0] = 0;
  x[2][0] = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      m[j][i + 1] = m[j][i];
    }
    if (s[i] == 'M') {
      m[a[i]][i + 1]++;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      x[j][i + 1] = x[j][i];
    }
    if (s[i] == 'X') {
      x[a[i]][i + 1]++;
    }
  }

  ll ans = 0;

  for (int j = 0; j < n; j++) {
    if (s[j] == 'E') {
      for (int i = 0; i < 3; i++) {
        for (int k = 0; k < 3; k++) {
          ans +=
              c(i, a[j], k) * ((m[i][j] - m[i][0]) * (x[k][n] - x[k][j + 1]));
        }
      }
    }
  }

  cout << ans << endl;

  return 0;
}