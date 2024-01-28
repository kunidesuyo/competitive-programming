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
  vector<vector<int>> a(n);
  for(int i = 0; i < n; i++) {
    int l;
    cin >> l;
    for(int j = 0; j < l; j++) {
      int tmp;
      cin >> tmp;
      a[i].push_back(tmp);
    }
  }
  for(int i = 0; i < q; i++) {
    int s, t;
    cin >> s >> t;
    cout << a[s-1][t-1] << endl;
  }
  return 0;
}