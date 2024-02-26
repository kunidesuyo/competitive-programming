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
  if(s.length() < t.length()) {
    cout << "No" << endl;
    return 0;
  }
  for(int i = 0; i <= s.length() - t.length(); i++) {
    if(s.substr(i, t.length()) == t) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}