#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  vector<int> bit_a(3);
  vector<int> bit_b(3);
  int a, b;
  cin >> a >> b;
  int ii = 0;
  while(a != 0) {
    bit_a[ii] = a % 2;
    a /= 2;
    ii++;
  }

  ii = 0;
  while(b != 0) {
    bit_b[ii] = b % 2;
    b /= 2;
    ii++;
  }
  int p = 1;
  int ans = 0;
  for(int i = 0; i < 3; i++) {
    if(bit_a[i] == 1 || bit_b[i] == 1) {
      ans += p;
    }
    p *= 2;
  }
  cout << ans << endl;
  return 0;
}