#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int a[n];
  int b[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    b[i] = a[i];
  }
  sort(b, b+n);

  int aa[n];

  for(int i = 0; i < k; i++) {
    vector<int> c;
    for(int j = 0; j * k + i < n; j++) {
      int index = j * k + i;
      c.push_back(a[index]);
    }
    sort(c.begin(), c.end());
    for(int j = 0; j * k + i < n; j++) {
      int index = j * k + i;
      aa[index] = c[j];
    }
  }
  bool ans = true;
  for(int i = 0; i < n; i++) {
    if(aa[i] != b[i]) {
      ans = false;
      break;
    }
  }
  if(ans) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}