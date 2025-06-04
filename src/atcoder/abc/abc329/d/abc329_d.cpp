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
  vector<int> a(m);
  for (int i = 0; i < m; i++) {
    cin >> a[i];
    a[i]--;
  }

  vector<int> x(n, 0);
  int before;
  for (int i = 0; i < m; i++) {
    if (i == 0) {
      before = a[i];
      x[a[i]]++;
      cout << a[i] + 1 << endl;
    } else {
      x[a[i]]++;
      if (x[a[i]] > x[before]) {
        cout << a[i] + 1 << endl;
        before = a[i];
      } else if (x[a[i]] < x[before]) {
        cout << before + 1 << endl;
      } else {
        if (a[i] < before) {
          cout << a[i] + 1 << endl;
          before = a[i];
        } else {
          cout << before + 1 << endl;
        }
      }
    }
  }
  return 0;
}