#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  int a[n+1], b[n+1];
  for(int i = 1; i <= n; i++) cin >> a[i] >> b[i];

  bool dp[n+1][x+1];
  for(int i = 0; i <= n; i++) dp[i][0] = true;
  for(int i = 1; i <= x; i++) dp[0][i] = false;

  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= x; j++) {
      dp[i][j] = false;
      for(int k = 0; k <= b[i]; k++) {
        if(j-a[i]*k >= 0) dp[i][j] |= dp[i-1][j-a[i]*k];
      }
    }
  }

  bool ans = dp[n][x];
  if(ans) cout << "Yes" << endl;
  else cout << "No" << endl;
  
  return 0;
}