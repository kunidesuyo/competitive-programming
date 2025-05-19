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
  int n;
  cin >> n;
  string s[n];
  for (int i = 0; i < n; i++) cin >> s[i];

  set<string> ss;
  int loop = 0;
  for (int i = 0; i < n; i++) {
    string rs = s[i];
    reverse(rs.begin(), rs.end());
    if (rs == s[i] && ss.find(rs) == ss.end()) {
      loop++;
    }
    // cout << s[i] << endl;
    // cout << rs << endl;
    ss.insert(s[i]);
    ss.insert(rs);
  }
  // cout << (int)ss.size() << endl;
  // for(auto sss: ss) {
  //   cout << sss << endl;
  // }
  cout << ((int)ss.size() + loop) / 2 << endl;
  return 0;
}