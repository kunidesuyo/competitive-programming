#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  string s, t;
  cin >> s;
  cin >> t;
  int n = t.length();
  set<int> nm;
  int base = s.length() - n;
  string init = s.substr(base, n);
  for(int i = 0; i < n; i++) {
    if(init[i] == t[i] || init[i] == '?' || t[i] == '?') {
      continue;
    } else {
      nm.insert(base + i);
    }
  }
  if(nm.size() == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  for(int x = 0; x < t.length(); x++) {
    nm.erase(base + x);
    if(s[x] == t[x] || s[x] == '?' || t[x] == '?') {
      nm.erase(x);
      if(nm.size() == 0) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    } else {
      cout << "No" << endl;
      nm.insert(x);
    }
  }
  return 0;
}