#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int q;
  cin >> q;
  for(int i = 0; i < q; i++) {
    int n, s;
    cin >> n >> s;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int ans = 2*n;
    int r = 0;
    int sum = 0;
    for(int l = 0; l < n; l++) {
      while(r < n && sum < s) {
        sum += a[r];
        r++;
      }
      if(sum < s) break;
      ans = min(ans, r-l);
      if(l == r) r++;
      else sum -= a[l];
    }
    if(ans == 2*n) cout << 0 << endl;
    cout << ans << endl;
  }
  return 0;
}