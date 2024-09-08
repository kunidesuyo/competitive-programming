#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n, d;
  cin >> n >> d;
  int t[n];
  for(int i = 0; i < n; i++) cin >> t[i];

  int ans = -1;
  for(int i = 0; i < n-1; i++) {
    if(t[i+1] - t[i] <= d) {
      ans = t[i+1];
      break;
    }
  }
  cout << ans << endl;
  return 0;
}