#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n], b[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }
  for(int i = 0; i < n; i++) cout << a[i] + b[i] << endl;
  return 0;
}