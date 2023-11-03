#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int r, c;
  cin >> r >> c;
  int a[2][2];
  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 2; j++) {
      cin >> a[i][j];
    }
  }
  cout << a[r-1][c-1] << endl;
  return 0;
}