#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int t;
  cin >> t;
  for(int i = 0; i < t; i++) {
    int n;
    cin >> n;
    int a[n];
    for(int j = 0; j < n; j++) cin >> a[j];
    int ans = 0;
    for(int j = 0; j < n; j++) {
      if(a[j] % 2 == 1) ans++;
    }
    cout << ans << endl;
  }
  return 0;
}