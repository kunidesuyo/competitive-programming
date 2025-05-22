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
  int n, q;
  cin >> n >> q;
  vector<multiset<int>> x(n, multiset<int>());
  vector<set<int>> y(200005, set<int>());
  for (int k = 0; k < q; k++) {
    int m;
    cin >> m;
    if (m == 1) {
      int i, j;
      cin >> i >> j;
      j--;
      x[j].insert(i);
      y[i - 1].insert(j);
    } else if (m == 2) {
      int i;
      cin >> i;
      i--;
      for (auto xx : x[i]) {
        cout << xx << " ";
      }
      cout << "\n";
    } else if (m == 3) {
      int i;
      cin >> i;
      for (auto xx : y[i - 1]) {
        cout << xx+1 << " ";
      }
      cout << "\n";
      // for (int l = 0; l < n; l++) {
      //   if (x[l].find(i) != x[l].end()) {
      //     cout << l + 1 << " ";
      //   }
      // }
      // cout << "\n";
    }
  }
  return 0;
}