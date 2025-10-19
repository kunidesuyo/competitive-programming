#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;
const ll INF = 1LL << 60;
const int inf = INT_MAX / 2;

int main() {
  string s;
  cin >> s;
  
  bool ans = true;
  for(int i = 0; i < (int)s.length(); i++) {
    if(i == 0) {
      if(!(s[i] - 'A' >= 0 && s[i] - 'A' < 26)) ans = false;
    } else {
      if(!(s[i] - 'a' >= 0 && s[i] - 'a' < 26)) ans = false;
    }
  }
  if(ans) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}