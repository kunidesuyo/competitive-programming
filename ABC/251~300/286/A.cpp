#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n, p, q, r, s;
  cin >> n >> p >> q >> r >> s;
  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < q-p+1; i++) {
    swap(a[p+i-1], a[r+i-1]);
  }
  for(int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << "\n";
  return 0;
}