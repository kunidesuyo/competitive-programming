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
  vector<int> a;
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a.push_back(x);
  }
  int start = k;
  for(int i = 0; i < k; i++) a.push_back(0);
  for(int i = start; i < n+k; i++) {
    cout << a[i] << " ";
  }
  cout << "\n";
  return 0;
}