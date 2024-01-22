#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int x, y, n;
  cin >> x >> y >> n;
  if(3*x <= y) {
    cout << n * x << endl;
  } else {
    int a = n / 3;
    int b = n % 3;
    cout << a * y + b * x << endl;
  }
  return 0;
}