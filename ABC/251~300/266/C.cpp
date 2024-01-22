#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int a[4][2];
  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 2; j++) {
      cin >> a[i][j];
    }
  }

  double total = 0;
  for(int i = 0; i < 4; i++) {
    int veca[2], vecb[2];
    for(int j = 0; j < 2; j++) {
      veca[j] = a[(i+1)%4][j] - a[i][j];
      vecb[j] = a[(i+2)%4][j] - a[(i+1)%4][j];
    }
    if(veca[0] * vecb[1] - veca[1] * vecb[0] < 0) {
      cout << "No" << endl;
      return 0;
    }
    // double theta = acos((veca[0]*vecb[0] + veca[1]*vecb[1]) / hypot(veca[0], vecb[0]) * hypot(veca[1], vecb[1]));
    // if(theta > 180) {
    //   cout << "No" << endl;
    //   return 0;
    // }
  }
  cout << "Yes" << endl;
  return 0;
}