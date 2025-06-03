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
  string s;
  cin >> s;
  vector<int> l(q);
  vector<int> r(q);
  for (int i = 0; i < q; i++) cin >> l[i] >> r[i];
  vector<int> x(n);
  x[0] = 0;
  for (int i = 1; i < n; i++) {
    x[i] = x[i - 1];
    if (s[i - 1] == s[i]) x[i]++;
  }
  // for(int i = 0; i < n; i++) {
  //   cout << x[i] << endl;
  // }
  for (int i = 0; i < q; i++) {
    cout << x[r[i]-1] - x[l[i]-1] << endl;
  }
  return 0;
}