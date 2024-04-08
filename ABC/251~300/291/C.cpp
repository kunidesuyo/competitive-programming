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
  set<pair<int, int>> v;
  pair<int, int> now = {0, 0};
  v.insert(now);
  for(int i = 0; i < n; i++) {
    pair<int, int> next;
    if(s[i] == 'R') {
      next.first = now.first + 1;
      next.second = now.second;
    } else if(s[i] == 'L') {
      next.first = now.first - 1;
      next.second = now.second;
    } else if(s[i] == 'U') {
      next.first = now.first;
      next.second = now.second + 1;
    } else if(s[i] == 'D') {
      next.first = now.first;
      next.second = now.second - 1;
    }
    if(v.find(next) != v.end()) {
      cout << "Yes" << endl;
      return 0;
    }
    now = next;
    v.insert(next);
  }
  cout << "No" << endl;
  return 0;
}