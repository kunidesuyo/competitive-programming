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
  string s[h];
  for(int i = 0; i < h; i++) cin >> s[i];

  int ans = 0;
  int x = -1;
  int y = -1;
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      if(s[i][j] == 'o') {
        if(x == -1) {
          x = i;
          y = j;
        } else {
          ans += abs(x - i);
          ans += abs(y - j);
          cout << ans << endl;
          return 0;
        }
      }
    }
  }

  return 0;
}