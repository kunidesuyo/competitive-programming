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
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> a;
  for (int i = 0; i < m; i++) {
    int aa;
    cin >> aa;
    a.push_back({aa, i});
  }
  string s[n];
  for (int i = 0; i < n; i++) cin >> s[i];

  int m_p = -1;
  vector<int> u(n, 0);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (s[i][j] == 'o') u[i] += a[j].first;
    }
    u[i] += i + 1;
    m_p = max(m_p, u[i]);
  }

  sort(all(a), greater<pair<int, int>>());

  for (int i = 0; i < n; i++) {
    int x = 0;
    for (int j = 0; j <= m; j++) {
      if (j != 0) {
        int index = j - 1;
        if (s[i][a[index].second] == 'x') {
          u[i] += a[index].first;
          x++;
        }
      }
      if (m_p <= u[i]) {
        cout << x << endl;
        break;
      }
    }
  }
  return 0;
}