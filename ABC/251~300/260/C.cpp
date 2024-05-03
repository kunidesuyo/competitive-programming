#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;

using namespace std;

int main() {
  ll n, x, y;
  cin >> n >> x >> y;
  ll now = 0;
  vector<ll> red(n+1, 0);
  vector<ll> blue(n+1, 0);
  red[n] = 1;
  for(ll i = n; i >= 2; i--) {
    red[i-1] += red[i];
    blue[i] += red[i] * x;
    red[i] = 0;
    red[i-1] += blue[i];
    blue[i-1] += blue[i] * y;
    blue[i] = 0;
  }
  cout << blue[1] << endl;
  return 0;
}