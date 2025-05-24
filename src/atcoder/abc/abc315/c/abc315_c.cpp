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
  vector<pair<int, int>> fs;
  vector<pair<int, int>> sf;
  for (int i = 0; i < n; i++) {
    int f, s;
    cin >> f >> s;
    fs.push_back(pair(f, s));
    sf.push_back(pair(s, f));
  }

  sort(all(sf));
  sort(all(fs));

  // same
  int same = -1;
  for (int i = 0; i < n - 1; i++) {
    if (fs[i].first == fs[i + 1].first) {
      int sat = max(fs[i].second, fs[i + 1].second) +
                min(fs[i].second, fs[i + 1].second) / 2;
      same = max(same, sat);
    }
  }

  // different
  int diff = -1;
  pair<int, int> ice = sf[n - 1];
  for (int i = n - 2; i >= 0; i--) {
    if (sf[i].second != ice.second) {
      diff = max(diff, sf[i].first + ice.first);
    }
  }

  cout << max(same, diff) << endl;

  return 0;
}