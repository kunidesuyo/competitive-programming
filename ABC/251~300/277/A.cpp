#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  int p;
  for(int i = 1; i <= n; i++) {
    cin >> p;
    if(p == x) cout << i << endl;
  }

  return 0;
}