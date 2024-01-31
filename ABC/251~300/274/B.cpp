#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  string c[h];
  for(int i = 0; i < h; i++) cin >> c[i];
  vector<int> ans(w, 0);
  for(int j = 0; j < w; j++) {
    int num = 0;
    for(int i = 0; i < h; i++) {
      if(c[i][j] == '#') num++;
    }
    ans[j] = num;
  }
  for(auto a : ans) cout << a << " ";
  cout << "\n";
  return 0;
}