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
  int t[q], a[q], b[q];
  for(int i = 0; i < q; i++) cin >> t[i] >> a[i] >> b[i];

  map<int, set<int>> g;
  for(int i = 0; i < q; i++) {
    int aa = a[i] -1;
    int bb = b[i] -1;
    if(t[i] == 1) {
      g[aa].insert(bb);
    } else if (t[i] == 2) {
      g[aa].erase(bb);
    } else {
      if(g[aa].find(bb) == g[aa].end() || g[bb].find(aa) == g[bb].end()) {
        cout << "No" << endl;
      } else {
        cout << "Yes" << endl;
      }
    }
  }
  
  return 0;
}