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
  int a[15][15];

  for(int i = 0; i < 15; i++) {
    for(int j = 0; j < 15; j++) {
      a[i][j] = 0;
    }
  }
  for(int i = 0; i <= 6; i += 2) {
    int start = i;
    int start2 = 15 - 1 - i;
    for(int j = i; j < 15-i; j++) {
      a[start][j] = 1;
      a[j][start] = 1;
      a[start2][j] = 1;
      a[j][start2] = 1;
    }
  }
  // for(int i = 0; i < 15; i++) {
  //   for(int j = 0; j < 15; j++) {
  //     cout << a[i][j];
  //   }
  //   cout << "\n";
  // }
  cout << (a[r-1][c-1] == 1 ? "black" : "white") << endl;
  return 0;
}