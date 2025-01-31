#include <bits/stdc++.h>

#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;
const ll INF = 1LL << 60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  stack<char> st;
  int x = 0;

  for (int i = 0; i < n; i++) {
    // cout << i << endl;
    if (s[i] == '(') {
      st.push(s[i]);
      x++;
    } else if (s[i] == ')') {
      if (x > 0) {
        while (true) {
          if (st.top() != '(') {
            st.pop();
          } else {
            st.pop();
            break;
          }
        }
        x--;
      } else {
        st.push(s[i]);
      }
    } else {
      st.push(s[i]);
    }
  }
  vector<char> ans;
  while (!st.empty()) {
    ans.push_back(st.top());
    st.pop();
  }
  reverse(ans.begin(), ans.end());
  for (auto t : ans) {
    cout << t;
  }
  cout << "\n";
  return 0;
}