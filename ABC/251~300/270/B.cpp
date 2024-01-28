#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int x, y, z;
  cin >> x >> y >> z;
  if(!(min(0, x) <= y && y <= max(0, x))) {
    cout << abs(x) << endl;
    return 0;
  } else {
    //鍵を拾えない
    if(!(min(0, y) <= z && z <= max(0, y)) && ((y<0&&z<0) || (y>0&&z>0))) {
      cout << -1 << endl;
      return 0;
    } else {
      cout << abs(z) + abs(x-z) << endl;
      return 0;
    }
  }
  return 0;
}