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
  vector<int> b(n);
  vector<double> time(n);
  double total = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
    time[i] = (double)a[i] / b[i];
    total += time[i];
  }

  double half = total / 2;
  double now = 0;
  double ans = 0;
  for (int i = 0; i < n; i++) {
    if (now + time[i] >= half) {
      double m = half - now;
      ans += m * b[i];
      break;
    } else {
      now += time[i];
      ans += a[i];
    }
  }
  cout << setprecision(10) << ans << endl;

  return 0;
}