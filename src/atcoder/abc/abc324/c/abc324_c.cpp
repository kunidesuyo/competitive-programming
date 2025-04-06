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
  string tt;
  cin >> n >> tt;
  string s[n];
  for (int i = 0; i < n; i++) cin >> s[i];

  vector<int> ans;

  for (int i = 0; i < n; i++) {
    if (tt == s[i]) {
      ans.push_back(i);
      continue;
    }
    int tl = (int)tt.size();
    int sl = (int)s[i].size();
    int l = min((int)tt.size(), (int)s[i].size());
    int a = 0;
    int b = 0;
    for (int j = 0; j < l; j++) {
      if (tt[j] != s[i][j]) break;
      a++;
    }
    for (int j = 0; j < l; j++) {
      if (tt[tl - j - 1] != s[i][sl - j - 1]) break;
      b++;
    }
    // cout << i << endl;
    // cout << a << " " << b << endl;
    if (abs(tl - sl) > 1) continue;
    if (tl == sl) {
      if (a + b >= l - 1) ans.push_back(i);
    } else if (tl > sl) {
      if (a + b >= l) ans.push_back(i);
    } else if (tl < sl) {
      if (a + b >= l) ans.push_back(i);
    }
  }

  cout << ans.size() << endl;
  for (int i = 0; i < (int)ans.size(); i++) {
    if (i != 0) cout << " ";
    cout << ans[i] + 1;
  }
  cout << "\n";

  return 0;
}