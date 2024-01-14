#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  double a, b, d;
  cin >> a >> b >> d;
  if(a == 0 && b == 0) {
    cout << 0 << " " << 0 << endl;
    return 0;
  }
  double r = sqrt(a*a + b*b);
  double theta = atan2(b, a);
  double x = r * cos(theta + d * M_PI / 180);
  double y = r * sin(theta + d * M_PI / 180);
  cout <<fixed<<setprecision(10)<< x << " " << y << endl;
  return 0;
}