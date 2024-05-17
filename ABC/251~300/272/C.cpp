#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;

using namespace std;

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  for(ll i = 0; i < n; i++) {
    cin >> a[i];
  }

  if(n == 2) {
    if(a[0] % 2 == a[1] % 2) {
      cout << a[0] + a[1] << endl;
    } else {
      cout << -1 << endl;
    }
    return 0;
  }

  sort(a.rbegin(), a.rend());

  vector<ll> odd;
  vector<ll> even;
  for(ll i = 0; i < 3; i++) {
    if(a[i] % 2 == 0) {
      even.push_back(a[i]);
    } else {
      odd.push_back(a[i]);
    }
  }

  if(even.size() > odd.size()) {
    cout << even[0] + even[1] << endl;
  } else {
    cout << odd[0] + odd[1] << endl;
  }

  return 0;
}