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
  string s, t;
  cin >> s >> t;
  int n = s.length();
  vector<int> ds(26, 0);
  int sa = 0;
  vector<int> dt(26, 0);
  int ta = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '@') {
      sa++;
    } else {
      ds[s[i] - 'a']++;
    }
    if (t[i] == '@') {
      ta++;
    } else {
      dt[t[i] - 'a']++;
    }
  }
  string at = "atcoder";
  for (int i = 0; i < 26; i++) {
    if (ds[i] == dt[i]) continue;
    bool m = false;
    char target = 'a' + i;
    for (int j = 0; j < 7; j++) {
      if (target == at[j]) {
        int dsa = max(0, dt[i] - ds[i]);
        int dta = max(0, ds[i] - dt[i]);
        sa -= dsa;
        ta -= dta;
        if(sa >= 0 && ta >= 0) {
          m = true;
        } else {
          cout << "No" << endl;
          return 0;      
        }
      }
      if(m) break;
    }
    if (m) continue;
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
  return 0;
}