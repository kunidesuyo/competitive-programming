#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;
const ll INF = 1LL << 60;
const int inf = INT_MAX / 2;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  vector<int> t;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    t.push_back(a[i]+1);
    t.push_back(a[i]);
    t.push_back(a[i]-1);
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
    t.push_back(b[i]+1);
    t.push_back(b[i]);
    t.push_back(b[i]-1);
  }

  sort(all(a));
  sort(all(b));
  sort(all(t));


  for(auto now: t) {
    int sell = upper_bound(all(a), now) - a.begin();
    int buy = m - (int)(lower_bound(all(b), now) - b.begin());
    if(sell >= buy) {
      cout << now << endl;
      return 0;
    }
  }



  return 0;
}