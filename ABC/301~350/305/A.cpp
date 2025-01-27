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
  int d = n % 5;
  if (d <= 2) {
    cout << n - d << endl;
  } else {
    cout << n - d + 5 << endl;
  }

  return 0;
}