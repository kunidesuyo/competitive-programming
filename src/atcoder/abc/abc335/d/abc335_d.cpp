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
  int n;
  cin >> n;
  int ans[n][n];
  pair<int, int> now;
  now = {n / 2, n / 2};
  int k = (n - 1) / 2;
  int c = 0;
  int base = 1;
  for (int i = 0; i < k; i++) {
    now.first++;
    c++;
    ans[now.first][now.second] = c;
    // cout << now.first << " " << now.second << " " << c << endl;
    // R
    for (int j = 0; j < base; j++) {
      now.second++;
      c++;
      ans[now.first][now.second] = c;
      // cout << now.first << " " << now.second << " " << c << endl;
    }
    // U
    for (int j = 0; j < base + 1; j++) {
      now.first--;
      c++;
      ans[now.first][now.second] = c;
      // cout << now.first << " " << now.second << " " << c << endl;
    }
    // L
    for (int j = 0; j < base + 1; j++) {
      now.second--;
      c++;
      ans[now.first][now.second] = c;
      // cout << now.first << " " << now.second << " " << c << endl;
    }
    // D
    for (int j = 0; j < base + 1; j++) {
      now.first++;
      c++;
      ans[now.first][now.second] = c;
      // cout << now.first << " " << now.second << " " << c << endl;
    }
    base += 2;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (j != 0) cout << ' ';
      if (i == n / 2 && j == n / 2)
        cout << 'T';
      else
        cout << ans[i][j];
    }
    cout << "\n";
  }
  return 0;
}