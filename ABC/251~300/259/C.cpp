#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  vector<pair<char, int>> ss, tt;
  char a;
  int b;
  for(int i = 0; i < s.length(); i++) {
    if(i == 0) {
      a = s[i];
      b = 1;
    } else {
      if(s[i-1] != s[i]) {
        ss.push_back({a, b});
        a = s[i];
        b = 1;
      } else {
        b++;
      }
    }
    if(i == s.length() - 1) {
      ss.push_back({a, b});
    }
  }
  for(int i = 0; i < t.length(); i++) {
    if(i == 0) {
      a = t[i];
      b = 1;
    } else {
      if(t[i-1] != t[i]) {
        tt.push_back({a, b});
        a = t[i];
        b = 1;
      } else {
        b++;
      }
    }
    if(i == t.length() - 1) {
      tt.push_back({a, b});
    }
  }
  if(ss.size() != tt.size()) {
    cout << "No" << endl;
    return 0;
  }
  for(int i = 0; i < ss.size(); i++) {
    if(ss[i].first != tt[i].first) {
      cout << "No" << endl;
      return 0;
    }
    if(ss[i].second == tt[i].second) {
      continue;
    } else {
      if(ss[i].second < tt[i].second) {
        if(ss[i].second >= 2) {
          continue;
        } else {
          cout << "No" << endl;
          return 0;
        }
      } else {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}