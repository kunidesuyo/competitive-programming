#include <bits/stdc++.h>

#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;
const ll INF = 1LL << 60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  string s[n];
  for (int i = 0; i < n; i++) cin >> s[i];
  int a[n];
  for (int i = 0; i < n; i++) a[i] = i;

  bool ok = false;
  do {
    bool t = true;
    for (int i = 0; i < n - 1; i++) {
      string x = s[a[i]];
      string y = s[a[i + 1]];
      int diff = 0;
      for (int j = 0; j < m; j++) {
        if (x[j] != y[j]) diff++;
      }
      if (diff != 1) {
        t = false;
      }
    }
    if (t) {
      ok = true;
      break;
    }
  } while (next_permutation(a, a + n));
  if (ok) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}