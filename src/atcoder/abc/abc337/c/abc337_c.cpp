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
  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];
  vector<int> r(n, -2);
  int start;
  for (int i = 0; i < n; i++) {
    if (a[i] == -1) {
      // r[i] = -1;
      start = i;
    } else {
      r[a[i]-1] = i;
    }
  }

  // for(int i = 0; i < n; i++) cout << r[i] << " ";
  // cout << "\n";

  int now = start;
  // int next = a[start];
  for (int i = 0; i < n; i++) {
    cout << now+1 << " ";
    now = r[now];
  }
  cout << "\n";

  return 0;
}