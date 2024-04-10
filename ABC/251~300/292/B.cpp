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
  vector<int> p(n, 0);
  for(int i = 0; i < q; i++) {
    int c, x;
    cin >> c >> x;
    x--;
    if(c == 1) {
      p[x] += 1;
    } else if(c == 2) {
      p[x] += 2;
    } else {
      if(p[x] >= 2) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
  }
  return 0;
}