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
  int q;
  cin >> q;
  for(int i = 0; i < q; i++) {
    int t;
    cin >> t;
    if(t == 1) {
      int k, x;
      cin >> k >> x;
      a[k-1] = x;
    } else if(t == 2) {
      int k;
      cin >> k;
      cout << a[k-1] << endl;
    }
  }
  return 0;
}