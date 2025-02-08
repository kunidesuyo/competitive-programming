#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

int main() {
  int n;
  cin >> n;
  int d = n / 100;
  if(n % 100 != 0) {
    d++;
  }
  cout << d << endl;
  return 0;
}