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
  bool wrap = false;
  for(int i = 0; i < n; i++) {
    if(s[i] == '"') {
      wrap = !wrap;
    }
    if(s[i] == ',') {
      if(!wrap) {
        s[i] = '.';
      }
    }
  }
  cout << s << endl;
  return 0;
}