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
  string s[n];
  for(int i = 0; i < n; i++) cin >> s[i];

  int ans = 0;
  for(int i = 0; i < n-1; i++) {
    for(int j = i+1; j < n; j++) {
      if(i == j) continue;
      bool ok = true;
      for(int k = 0; k < m; k++) {
        if(s[i][k] != 'o' && s[j][k] != 'o') {
          ok = false;
          break;
        }
      }
      if(ok) ans++;
    }
  }
  cout << ans << endl;

  
  return 0;
}