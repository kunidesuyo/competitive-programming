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
  ll a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  map<int, ll> da;
  ll all = -1;
  int q;
  cin >> q;
  for(int i = 0; i < q; i++) {
    int t;
    cin >> t;
    if(t == 1) {
      int x;
      cin >> x;
      all = x;
      da.clear();
    } else if(t == 2) {
      int iq, xq;
      cin >> iq >> xq;
      iq--;
      da[iq] += xq;
    } else {
      int iq;
      cin >> iq;
      iq--;
      if(all == -1) {
        cout << a[iq] + da[iq] << endl;
      } else {
        cout << all + da[iq] << endl;
      }
    }
  }
  return 0;
}