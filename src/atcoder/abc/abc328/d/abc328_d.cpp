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
  vector<char> x;
  for (int i = 0; i < (int)s.length(); i++) {
    x.push_back(s[i]);
    if (s[i] == 'C') {
      int n = x.size();
      if (x.size() >= 3) {
        if (x[n - 2] == 'B' && x[n - 3] == 'A') {
          // remove
          x.pop_back();
          x.pop_back();
          x.pop_back();
        }
      }
    }
  }
  for(auto xx : x) {
    cout << xx;
  }
  cout << "\n";
  return 0;
}