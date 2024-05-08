#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

map<ll, ll> m;

ll f(ll n) {
  if(n == 0) return 1;
  ll n2, n3;
  if(m.contains(n/2)) n2 = m[n/2];
  else n2 = f(n/2);
  if(m.contains(n/3)) n3 = m[n/3];
  else n3 = f(n/3);
  m[n] = n2 + n3;
  return m[n];
}

int main() {
  ll n;
  cin >> n;
  cout << f(n) << endl;
  return 0;
}