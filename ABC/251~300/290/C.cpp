#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  set<int> a;
  for(int i = 0; i < n; i++) {
    int aa;
    cin >> aa;
    a.insert(aa);
  }
  int ans = -1;
  for(int i = 0; i < k; i++) {
    if(a.find(i) == a.end()) {
      ans = i;
      break;
    }
  }
  if(ans == -1) {
    cout << k << endl;
  } else {
    cout << ans << endl;
  }
  return 0;
}