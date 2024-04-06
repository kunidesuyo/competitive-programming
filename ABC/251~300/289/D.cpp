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
  int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int m;
  cin >> m;
  set<int> b;
  for(int i = 0; i < m; i++) {
    int bb;
    cin >> bb;
    b.insert(bb);
  }
  int x;
  cin >> x;
  vector<bool> dp(x+1, false);
  dp[0] = true;
  for(int i = 1; i <= x; i++) {
    if(b.find(i) != b.end()) continue;
    for(int j = 0; j < n; j++) {
      int index = i - a[j];
      if(index >= 0 && b.find(index) == b.end()) {
        if(dp[index]) dp[i] = true;
      }
    }
  }
  if(dp[x]) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}