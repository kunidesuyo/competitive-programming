#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int d[7] = {0, 3, 4, 8, 9, 14, 23};
  char p, q;
  cin >> p >> q;
  int ip = p - 'A';
  int iq = q - 'A';
  cout << d[max(ip, iq)] - d[min(ip, iq)] << endl;
  return 0;
}