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
  string s[n];
  int a[n];
  for (int i = 0; i < n; i++) cin >> s[i] >> a[i];
  int index = 0;
  int mini = a[0];
  for (int i = 1; i < n; i++) {
    if (mini > a[i]) {
      index = i;
      mini = a[i];
    }
  }
  for (int i = 0; i < n; i++) {
    int ii = (index + i) % n;
    cout << s[ii] << endl;
  }
  return 0;
}