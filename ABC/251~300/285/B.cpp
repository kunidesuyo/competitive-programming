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
  string s;
  cin >> s;
  for(int i = 1; i <= n-1; i++) {
    for(int l = 1; l <= n; l++) {
      if(l+i > n) {
        cout << l-1 << endl;
        break;
      }
      if(s[l-1] == s[l+i-1]) {
        cout << l-1 << endl;
        break;
      }
    }
  }
  return 0;
}