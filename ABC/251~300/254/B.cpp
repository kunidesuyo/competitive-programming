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

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < i+1; j++) {
      if(j == 0 || i == j) {
        a[i][j] = 1;
      } else {
        a[i][j] = a[i-1][j-1] + a[i-1][j];
      }
      if(j != 0) cout << " ";
      cout << a[i][j];
    }
    cout << "\n";
  }

  return 0;
}