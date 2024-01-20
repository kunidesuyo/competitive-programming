#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n;
  cin >> n;
  int p[n+1];
  for(int i = 2; i <= n; i++) cin >> p[i];

  int ans = 0;
  int now = p[n];
  while(true) {
    if(now == 1) {
      ans++;
      break;
    }
    now = p[now];
    ans++;
  }
  cout << ans << endl;

  return 0;
}