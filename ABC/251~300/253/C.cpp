#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int q;
  cin >> q;
  multiset<int> s;
  for(int _ = 0; _ < q; _++) {
    int a, c, x;
    cin >> a;
    if(a == 1) {
      cin >> x;
      s.insert(x);
    } else if(a == 2) {
      cin >> x >> c;
      for(int i = 0; i < c; i++) {
        auto itr = s.find(x);
        if(itr != s.end()) {
          s.erase(itr);
        } else {
          break;
        }
      }
    } else if(a == 3) {
      cout << *s.rbegin() - *s.begin() << endl;
    }
  }

  return 0;
}