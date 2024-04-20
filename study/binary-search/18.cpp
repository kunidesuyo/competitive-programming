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
  vector<int> s(n);
  for(int i = 0; i < n; i++) cin >> s[i];
  int q;
  cin >> q;
  int t[q];
  for(int i = 0; i < q; i++) cin >> t[i];
  
  sort(all(s));

  int ans = 0;
  for(int i = 0; i < q; i++) {
    int now = t[i];
    int l = -1;
    int r = s.size();
    int m;
    while(r - l > 1) {
      m = (l+r) / 2;
      if(now <= s[m]) r = m;
      else l = m;
    }
    if(r == s.size()) continue;
    if(s[r] == now) ans++;
  }

  cout << ans << endl;
  return 0;
}