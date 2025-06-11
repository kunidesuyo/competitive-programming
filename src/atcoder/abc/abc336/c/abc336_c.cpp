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
  int digi[5] = {0, 2, 4, 6, 8};
  ll n;
  cin >> n;
  n--;

  vector<int> ans;

  if(n==0) {
    cout << 0<< endl;
    return 0;
  }
  // ll nn = n % 5;
  // ans.push_back(digi[nn]);
  // n/=5;
  while(n != 0) {
    ll now = n % 5;
    ans.push_back(digi[now]);
    n /= 5;
  }

  reverse(all(ans));
  for(auto a : ans) {
    cout << a;
  }
  cout << "\n";
  return 0;
}