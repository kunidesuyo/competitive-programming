#include <bits/stdc++.h>

#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;
const ll INF = 1LL << 60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n, d;
  cin >> n >> d;
  vector<int> x(n);
  vector<int> y(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }
  queue<int> q;
  q.push(0);
  vector<bool> ans(n);
  ans[0] = true;
  while (!q.empty()) {
    int t = q.front();
    q.pop();
    for (int i = 0; i < n; i++) {
      if (i == t) continue;
      if (ans[i]) continue;
      if (d * d >=
          (x[t] - x[i]) * (x[t] - x[i]) + (y[t] - y[i]) * (y[t] - y[i])) {
        ans[i] = true;
        q.push(i);
      }
    }
  }
  for (int i = 0; i < n; i++) {
    if (ans[i]) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}