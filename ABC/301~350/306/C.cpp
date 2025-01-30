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
  int N = 3 * n;
  int a[N];
  for (int i = 0; i < N; i++) {
    cin >> a[i];
    a[i]--;
  }
  vector<int> b(n, 0);

  for (int i = 0; i < N; i++) {
    b[a[i]]++;
    if (b[a[i]] != 2) {
      a[i] = -1;
    }
  }
  for (int i = 0; i < N; i++) {
    if (a[i] != -1) {
      cout << a[i] + 1 << " ";
    }
  }
  cout << "\n";

  return 0;
}