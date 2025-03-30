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
  string s;
  cin >> s;
  int q;
  cin >> q;
  vector<int> t(q), x(q);
  vector<char> c(q);
  for (int i = 0; i < q; i++) cin >> t[i] >> x[i] >> c[i];
  int is_upper = -1;
  int last_change = -1;
  for (int i = 0; i < q; i++) {
    if (t[i] == 3 || t[i] == 2) last_change = i;
  }


  if(last_change != -1) {
    for (int i = 0; i <= last_change; i++) {
      if (t[i] == 1) {
        s[x[i] - 1] = c[i];
      } else if (t[i] == 2) {
        //
        is_upper = 0;
      } else if (t[i] == 3) {
        //
        is_upper = 1;
      }
    }
    for (int i = 0; i < n; i++) {
      if (is_upper == 0) {
        if ('A' <= s[i] && s[i] <= 'Z') s[i] = s[i] + 32;
      } else if (is_upper == 1) {
        if ('a' <= s[i] && s[i] <= 'z') s[i] = s[i] - 32;
      }
    }
  }

  // cout << s << endl;

  for (int i = last_change + 1; i < q; i++) {
    s[x[i] - 1] = c[i];
  }

  cout << s << endl;

  return 0;
}