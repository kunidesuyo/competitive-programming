#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int d;
  cin >> d;
  int n;
  cin >> n;
  int m;
  cin >> m;
  vector<int> s;
  for(int i = 0; i < n-1; i++) {
    int ss;
    cin >> ss;
    s.push_back(ss);
  }
  s.push_back(0);
  s.push_back(d);
  int k[m];
  for(int i = 0; i < m; i++) cin >> k[i];

  sort(all(s));

  int ans = 0;
  for(int i = 0; i < m; i++) {
    int now = k[i];
    int l = -1;
    int r = s.size();
    while(r - l > 1) {
      int m = (r+l) / 2;
      if(now <= s[m]) r = m;
      else l = m;
    }
    ans += min(abs(s[l]-now), abs(s[r]-now));
  }
  cout << ans << endl;
  return 0;
}