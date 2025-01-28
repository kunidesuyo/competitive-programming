#include <bits/stdc++.h>

#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;
const ll INF = 1LL << 60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  int q;
  cin >> q;
  vector<int> l(q), r(q);
  for (int i = 0; i < q; i++) cin >> l[i] >> r[i];
  vector<int> d(n);
  d[0] = 0;
  for (int i = 1; i < n; i++) {
    if (i % 2 != 0) {
      d[i] = d[i - 1];
    } else {
      d[i] = d[i - 1] + a[i] - a[i - 1];
    }
  }
  // for (int i = 0; i < n; i++) {
  //   cout << d[i] << endl;
  // }
  // cout << "\n";

  for (int i = 0; i < q; i++) {
    int i_l = lower_bound(a.begin(), a.end(), l[i]) - a.begin();
    int sum_l;
    if (i_l % 2 == 0) {
      if (i_l == 0) {
        sum_l = 0;
      } else {
        sum_l = d[i_l - 1] + (l[i] - a[i_l - 1]);
      }
    } else {
      sum_l = d[i_l];
    }
    int i_r = lower_bound(a.begin(), a.end(), r[i]) - a.begin();
    int sum_r;
    if (i_r % 2 == 0) {
      if (i_r == 0) {
        sum_r = 0;
      } else {
        sum_r = d[i_r - 1] + (r[i] - a[i_r - 1]);
      }
    } else {
      sum_r = d[i_r];
    }

    cout << sum_r - sum_l << endl;

    // cout << i_l << endl;
    // cout << sum_l << endl;
    // cout << i_r << endl;
    // cout << sum_r << endl;
    // cout << "\n";
  }

  return 0;
}