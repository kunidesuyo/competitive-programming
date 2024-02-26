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
  int s[n];
  for(int i = 0; i < n; i++) {
    cin >> s[i];
  }
  int a[n];
  a[0] = s[0];
  for(int i = 1; i < n; i++) {
    a[i] = s[i] - s[i-1];
  }
  for(int i = 0; i < n; i++) {
    cout << a[i];
    cout << " ";
  }
  cout << "\n";
  return 0;
}