#include <bits/stdc++.h>

#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;
const ll INF = 1LL << 60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  ll a, b;
  cin >> a >> b;
  if (a % b == 0) {
    cout << a / b << endl;
  } else {
    cout << a / b + 1 << endl;
  }

  return 0;
}