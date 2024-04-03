#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  ll n, a, b;
  cin >> n >> a >> b;
  string s;
  cin >> s;
  
  ll ans = INF;
  string before = s;
  for(ll i = 0; i < n; i++) {
    string now;
    if(i == 0) {
      now = s;
    } else {
      now = before.substr(1, n-1) + before[0];
    }
    ll cost = a * i;
    for(ll j = 0; j < n/2; j++) {
      // if(i == 1) cout << s[j] << s[n-1-j] << endl;
      if(now[j] != now[n-1-j]) cost += b;
    }
    // cout << i << " " << now << " " << cost << endl;
    ans = min(ans, cost);
    before = now;
  }
  cout << ans << endl;
  return 0;
}