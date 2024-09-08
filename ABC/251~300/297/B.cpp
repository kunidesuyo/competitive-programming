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
  int x = -1;
  int y;
  for(int i = 0; i < s.length(); i++) {
    if(s[i] == 'B') {
      if(x == -1) {
        x = i;
      } else {
        y = i;
      }
    }
  }
  if(x % 2 == y % 2) {
    cout << "No" << endl;
    return 0;
  }

  x = -1;
  for(int i = 0; i < s.length(); i++) {
    if(s[i] == 'R') {
      if(x == -1) {
        x = i;
      } else {
        y = i;
      }
    }
  }
  int z;
  for(int i = 0; i < s.length(); i++) {
    if(s[i] == 'K') {
      z = i;
    }
  }
  if(x < z && z < y) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}