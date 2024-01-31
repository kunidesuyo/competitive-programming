#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int f(int n) {
  if(n == 0) return 1;
  return f(n-1) * n;
}

int main() {
  int n;
  cin >> n;
  cout << f(n) << endl;
  return 0;
}