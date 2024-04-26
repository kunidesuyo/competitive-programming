#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;

using namespace std;

int main() {
  ll n;
  cin >> n;
  ll ans = 0;
  for(ll a = 1; a*a*a <= n; a++) {
    for(ll b = a; a*b*b <= n; b++) {
      ans += n/(a*b) - b + 1;
    }
  }
  cout << ans << endl;
  return 0;
}