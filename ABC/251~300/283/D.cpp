#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.length();
  stack<char> _stack;
  set<char> _set;
  for(int i = 0; i < n; i++) {
    char now = s[i];
    if(now == '(') {
      _stack.push(now);
    } else if(now == ')') {
      while(true) {
        char top = _stack.top();
        _stack.pop();
        if(top == '(') {
          break;
        } else {
          _set.erase(top);
        }
      }
    } else {
      if(_set.find(now) != _set.end()) {
        cout << "No" << endl;
        return 0;
      } else {
        _set.insert(now);
        _stack.push(now);
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}