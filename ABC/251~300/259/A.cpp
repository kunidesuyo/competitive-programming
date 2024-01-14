#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n, m, x, t, d;
  cin >> n >> m >> x >> t >> d;
  if(x <= m) {
    cout << t << endl;
  } else {
    cout << t - (x-m) * d << endl;
  }
  return 0;
}