#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n, x, y, z;
  cin >> n >> x >> y >> z;
  int a[n], b[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 0; i < n; i++) cin >> b[i];
  vector<int> pass(n, 0);
  vector<pair<int, int>> aa, bb, ab;
  for(int i = 0; i < n; i++) {
    aa.push_back({-a[i], i});
    bb.push_back({-b[i], i});
    ab.push_back({-(a[i] + b[i]), i});
  }
  sort(all(aa));
  sort(all(bb));
  sort(all(ab));
  for(int i = 0; i < n; i++) {
    aa[i].first = -aa[i].first;
    bb[i].first = -bb[i].first;
    ab[i].first = -ab[i].first;
  }

  int sum = 0;
  for(int i = 0; i < n; i++) {
    if(sum == x) break;
    if(pass[aa[i].second] == 0) {
      pass[aa[i].second] = 1;
      sum++;
      // cout << i << endl;
    }
  }
  sum = 0;
  for(int i = 0; i < n; i++) {
    if(sum == y) break;
    if(pass[bb[i].second] == 0) {
      pass[bb[i].second] = 1;
      sum++;
    }
  }
  sum = 0;
  for(int i = 0; i < n; i++) {
    if(sum == z) break;
    if(pass[ab[i].second] == 0) {
      pass[ab[i].second] = 1;
      sum++;
    }
  }

  for(int i = 0; i < n; i++) {
    if(pass[i] == 1) {
      cout << i+1 << endl;
    }
  }

  return 0;
}