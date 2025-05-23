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
  string s;
  cin >> s;
  vector<int> c(n);
  for (int i = 0; i < n; i++) cin >> c[i];
  vector<deque<char>> d(m);
  for (int i = 0; i < n; i++) {
    d[c[i] - 1].push_back(s[i]);
  }

  for (int i = 0; i < m; i++) {
    char x = d[i].back();
    d[i].pop_back();
    d[i].push_front(x);
  }

  for (int i = 0; i < n; i++) {
    char x = d[c[i] - 1].front();
    cout << x;
    d[c[i] - 1].pop_front();
  }
  cout << "\n";
  return 0;
}