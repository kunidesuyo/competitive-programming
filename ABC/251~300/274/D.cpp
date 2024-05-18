#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n, x, y;
  cin >> n >> x >> y;
  int a[n+1];
  int DIFF = 1e4+1;
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  a[0] = 0;

  vector<int> ax;
  vector<int> ay;
  for(int i = 0; i <= n; i++) {
    if(i % 2 == 0) {
      ay.push_back(a[i]);
    } else {
      ax.push_back(a[i]);
    }
  }

  x += DIFF;
  y += DIFF;
  int MAX = 2*DIFF + 10;
  int xn = ax.size();
  int yn = ay.size();
  vector<vector<bool>> dpx(xn, vector<bool>(MAX));
  vector<vector<bool>> dpy(yn, vector<bool>(MAX));
  int sign[2] = {1, -1};

  for(int i = 0; i < yn; i++) {
    // cout << i << endl;
    if(i == 0) {
      dpy[0][DIFF+ay[0]] = true;
      continue;
    }
    for(int j = 0; j < MAX; j++) {
      for(int k = 0; k < 2; k++) {
        int before = j + sign[k] * ay[i];
        // if(DIFF-1 <= j && j <= DIFF+1) cout << before << endl;
        if(0 <= before && before < MAX) {
          if(dpy[i-1][before] == true) dpy[i][j] = true;
        }
      }
    }
  }

  for(int i = 0; i < xn; i++) {
    if(i == 0) {
      dpx[0][DIFF+ax[0]] = true;
      continue;
    }
    for(int j = 0; j < MAX; j++) {
      for(int k = 0; k < 2; k++) {
        int before = j + sign[k] * ax[i];
        // if(DIFF-1 <= j && j <= DIFF+1) cout << before << endl;
        if(0 <= before && before < MAX) {
          if(dpx[i-1][before] == true) dpx[i][j] = true;
        }
      }
    }
  }

  // for(int i = 0; i < yn; i++) {
  //   for(int j = DIFF-5; j <= DIFF+5; j++) {
  //     cout << dpy[i][j] << " ";
  //   }
  //   cout << "\n";
  // }

  if(dpx[xn-1][x] && dpy[yn-1][y]) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}