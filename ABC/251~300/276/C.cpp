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
  int p[n];
  for(int i = 0; i < n; i++) {
    cin >> p[i];
  }

  for(int i = n-2; i >= 0; i--) {
    if(p[i] > p[i+1]) {
      int j = n-1;
      while(p[i] < p[j]) j--;
      swap(p[i], p[j]);
      reverse(p+i+1, p+n);
      break;
    }
  }
  for(int i = 0; i < n; i++) {
    cout << p[i] << " ";
  }
  cout << "\n";
  return 0;
}