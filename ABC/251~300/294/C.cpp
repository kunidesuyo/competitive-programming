#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> c;
  int a[n], b[m];
  for(int i = 0; i < n; i++) {
    int aa;
    cin >> aa;
    a[i] = aa;
    c.push_back(aa);
  }
  for(int i = 0; i < m; i++) {
    int aa;
    cin >> aa;
    b[i] = aa;
    c.push_back(aa);
  }
  sort(all(c));

  for(int i = 0; i < n; i++) {
    int num = lower_bound(all(c), a[i]) - c.begin() + 1;
    cout << num << " ";
  }
  cout << "\n";
  for(int i = 0; i < m; i++) {
    int num = lower_bound(all(c), b[i]) - c.begin() + 1;
    cout << num << " ";
  }
  cout << "\n";
  return 0;
}