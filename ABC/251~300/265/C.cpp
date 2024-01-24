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
  string g[h];
  for(int i = 0; i < h; i++) {
    cin >> g[i];
  }
  vector<vector<bool>> s(h, vector<bool>(w, false));
  int i = 0;
  int j = 0;
  while(true) {
    if(s[i][j] == true) {
      cout << -1 << endl;
      return 0;
    }
    s[i][j] = true;
    if(g[i][j] == 'U' && i != 0) {
      i = i-1;
      j = j;
    } else if (g[i][j] == 'D' && i != h-1) {
      i = i+1;
      j = j;
    } else if(g[i][j] == 'L' && j != 0) {
      i = i;
      j = j-1;
    } else if(g[i][j] == 'R' && j != w-1) {
      i = i;
      j = j+1;
    } else {
      break;
    }
  }
  cout << i+1 << " " << j+1 << endl;
  return 0;
}