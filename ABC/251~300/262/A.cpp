#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int y;
  cin >> y;
  if(y % 4 == 2) {
    cout << y << endl;
  } else {
    int a = y % 4;
    int b = (6 - a) % 4;
    cout << y + b << endl;
  }
  return 0;
}