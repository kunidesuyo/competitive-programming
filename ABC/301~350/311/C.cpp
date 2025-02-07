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
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    a[i]--;
  }

  vector<int> visited(n, false);
  vector<int> d;

  int now = 0;
  while (!visited[now]) {
    visited[now] = true;
    d.push_back(now);
    now = a[now];
  }

  vector<int> ans;
  bool find = false;
  for (auto dd : d) {
    if (find == true) {
      ans.push_back(dd);
    } else {
      if (dd == now) {
        find = true;
        ans.push_back(dd);
      }
    }
  }

  cout << ans.size() << endl;
  for(auto aa : ans) cout << aa+1 << " ";
  cout << "\n";

  return 0;
}