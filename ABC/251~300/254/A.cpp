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
  n %= 100;
  if(n < 10) {
    cout << "0" << n << endl;
  } else {
    cout << n << endl;
  }

  return 0;
}