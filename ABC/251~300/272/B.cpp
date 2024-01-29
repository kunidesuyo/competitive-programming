#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<set<int>> x(m);
  for(int i = 0; i < m; i++) {
    int k;
    cin >> k;
    for(int j = 0; j < k; j++) {
      int y;
      cin >> y;
      x[i].insert(y);
    }
  }
  for(int i = 1; i <= n-1; i++) {
    for(int j = i+1; j <= n; j++) {
      bool same = false;
      for(int k = 0; k < m; k++) {
        if(x[k].find(i) != x[k].end() && x[k].find(j) != x[k].end()) same = true;
      }
      if(!same) {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}