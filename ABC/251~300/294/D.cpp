#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  set<int> not_called;
  set<int> called;
  vector<bool> gone(n, false);
  for(int i = 0; i < n; i++) {
    not_called.insert(i);
  }
  for(int i = 0; i < q; i++) {
    int a, b;
    cin >> a;
    if(a == 1) {
      int now = *begin(not_called);
      not_called.erase(now);
      called.insert(now);
    } else if(a == 2) {
      cin >> b;
      b--;
      called.erase(b);
    } else {
      cout << *begin(called) + 1 << endl;
    }
  }
  return 0;
}