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
  string a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  bool ans = true;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < i; j++) {
      bool ok = false;
      if(a[i][j] == 'W' && a[j][i] == 'L') ok = true;
      if(a[i][j] == 'L' && a[j][i] == 'W') ok = true;
      if(a[i][j] == 'D' && a[j][i] == 'D') ok = true;
      if(!ok) ans = false;
    }
  }
  cout << (ans ? "correct" : "incorrect") << endl;
  return 0;
}