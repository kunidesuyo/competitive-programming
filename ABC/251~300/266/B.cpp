#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  ll n;
  cin >> n;
  ll x = 0;
  while(true) {
    if((n-x) % 998244353 == 0) {
      cout << x << endl;
      break;
    }
    x++;
  }
  return 0;
}