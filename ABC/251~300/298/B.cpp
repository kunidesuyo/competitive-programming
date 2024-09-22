#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n][n];
  int b[n][n];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> b[i][j];
    }
  }

  for(int ii = 0; ii < 4; ii++) {
    int c[n][n];
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        c[i][j] = a[n-1-j][i];
      }
    }
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        a[i][j] = c[i][j];
        // cout << a[i][j];
      }
      // cout << "\n";
    }
    bool ok = true;
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        if(a[i][j] == 1) {
          if(b[i][j] != 1) {
            ok = false;
          }
        }
      }
    }
    if(ok) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  
  return 0;
}