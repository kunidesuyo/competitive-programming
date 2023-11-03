#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int a[k];
  for(int i = 0; i < k; i++) {
    int b;
    cin >> b;
    a[i] = b - 1;
  }
  int x[n], y[n];
  for(int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }

  double ans = -1;
  for(int i = 0; i < n; i++) {
    bool skip = false;
    for(int j = 0; j < k; j++) {
      if(a[j] == i) {
        skip = true;
        break;
      }
    }
    if(skip) continue;
    double mini = 10000000;
    for(int j = 0; j < k; j++) {
      double d = sqrt(pow(x[i] - x[a[j]], 2) + pow(y[i] - y[a[j]], 2));
      mini = min(mini, d);
    }
    ans = max(ans, mini);
  }

  cout << setprecision(18) << ans;
  cout << "\n";

  return 0;
}