#include <bits/stdc++.h>

#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;
const ll INF = 1LL << 60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n, m, h, k;
  cin >> n >> m >> h >> k;
  string s;
  cin >> s;
  map<pair<int, int>, int> xy;
  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    xy.insert({{x, y}, 1});
  }
  // cout << xy.at({-1, -1}) << endl;
  int d[2] = {0, 0};
  bool ok = true;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'R') {
      d[0]++;
    } else if (s[i] == 'L') {
      d[0]--;
    } else if (s[i] == 'U') {
      d[1]++;
    } else if (s[i] == 'D') {
      d[1]--;
    }
    h--;
    // cout << h << endl;
    if (h < 0) {
      ok = false;
      break;
    }
    if (xy.find({d[0], d[1]}) != xy.end()) {
      if (h < k) {
        h = k;
        xy.erase({d[0], d[1]});
      }
    }
  }

  if (ok) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}