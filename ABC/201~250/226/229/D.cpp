#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;

using namespace std;

int main() {
  string s;
  cin >> s;
  ll k;
  cin >> k;
  ll n = s.length();

  ll ans = -1;

  ll num = 0;
  ll r;
  for(ll i = 0; i < n; i++) {
    if(s[i] == '.') num++;
    if(num > k) {
      num--;
      r = i-1;
      break;
    }
  }
  ll l = 0;
  while(r < n) {
    if(s[l] == '.') {
      num--;
    }
    l++;
    while(true) {
      r++;
      if(s[r] == '.') {
        num++;
      }
      if(num > k) {
        r--;
        break;
      }
    }
    ans = max(ans, r-l+1);
  }
  cout << ans << endl;
  return 0;
}