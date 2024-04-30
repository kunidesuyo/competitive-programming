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
  string b[r];
  for(int i = 0; i < r; i++) cin >> b[i];

  for(int i = 0; i < r; i++) {
    for(int j = 0; j < c; j++) {
      if(b[i][j] != '.' && b[i][j] != '#') {
        int x = b[i][j] - '0';
        b[i][j] = '.';
        for(int ii = 0; ii < r; ii++) {
          for(int jj = 0; jj < c; jj++) {
            if(abs(ii-i) + abs(jj-j) <= x) {
              if(b[ii][jj] == '.' || b[ii][jj] == '#') {
                b[ii][jj] = '.';
              }
            }
          }
        }
      }
    }
  }
  for(int i = 0; i < r; i++) {
    for(int j = 0; j < c; j++) {
      cout << b[i][j];
    }
    cout << "\n";
  }
  
  return 0;
}