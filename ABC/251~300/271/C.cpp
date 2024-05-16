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
  vector<int> a(n);
  set<int> aa;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    aa.insert(a[i]);
  }

  int c[n+1];
  c[0] = 0;
  for(int i = 1; i <= n; i++) {
    if(aa.find(i) != aa.end()) {
      c[i] = c[i-1] + 1;
    } else {
      c[i] = c[i-1] + 2;
    }
  }

  int ans = 0;
  for(int i = 1; i <= n; i++) {
    if(c[i] <= n) {
      ans = i;
    } else {
      break;
    }
  }

  cout << ans << endl;
  return 0;
}