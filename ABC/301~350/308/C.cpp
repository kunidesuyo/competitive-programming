#include <bits/stdc++.h>

#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;
const ll INF = 1LL << 60;
const int inf = INT_MAX / 2;

using namespace std;

// bool comp(pair<ll, ll> a, pair<ll, ll> b) {
//   if (a.first != b.first) {
//     return a.first > b.first;
//   } else {
//     return a.second < b.second;
//   }
// }

bool comp(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b) {
  ll ai = a.first.first;
  ll bi = a.first.second;
  ll aj = b.first.first;
  ll bj = b.first.second;
  bool c = ai * (aj + bj) > aj * (ai + bi);
  bool eq = ai * (aj + bj) == aj * (ai + bi);
  if (!eq) {
    return c;
  } else {
    return a.second < b.second;
  }
}

int main() {
  int n;
  cin >> n;
  // vector<pair<ll, ll>> p(n);
  // vector<ll> a(n), b(n);
  // for (int i = 0; i < n; i++) {
  //   cin >> a[i] >> b[i];
  // }
  // // a+bの最小公倍数
  // ll aa = a[0] + b[0];
  // ll bb = a[1] + b[1];
  // ll m = aa / gcd(aa, bb) * bb;
  // for (int i = 2; i < n; i++) {
  //   m = m / gcd(m, a[i] + b[i]) * (a[i] + b[i]);
  // }
  // // cout << m << endl;
  // for (int i = 0; i < n; i++) {
  //   p[i].first = a[i] * (m / (a[i] + b[i]));
  //   p[i].second = i;
  // }
  // sort(p.begin(), p.end(), comp);
  // for (int i = 0; i < n; i++) {
  //   cout << p[i].second + 1 << " ";
  // }
  // cout << "\n";
  vector<pair<pair<int, int>, int>> p(n);
  // vector<int> a(n), b(n);
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    p[i].first = {a, b};
    p[i].second = i + 1;
  }
  // // a+bの最小公倍数
  // ll aa = a[0] + b[0];
  // ll bb = a[1] + b[1];
  // ll m = aa / gcd(aa, bb) * bb;
  // for (int i = 2; i < n; i++) {
  //   m = m / gcd(m, a[i] + b[i]) * (a[i] + b[i]);
  // }
  // cout << m << endl;
  // for (int i = 0; i < n; i++) {
  //   p[i].first = a[i] * (m / (a[i] + b[i]));
  //   p[i].second = i;
  // }
  sort(p.begin(), p.end(), comp);
  for (int i = 0; i < n; i++) {
    cout << p[i].second << " ";
  }
  cout << "\n";
  return 0;
}