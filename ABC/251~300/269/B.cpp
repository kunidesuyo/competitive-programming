#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  string s[10];
  for(int i = 0; i < 10; i++) cin >> s[i];
  int a = -1;
  int b = -1;
  int c = -1;
  int d = -1;
  for(int i = 0; i < 10; i++) {
    for(int j = 0; j < 10; j++) {
      if(s[i][j] == '#') {
        if(c == -1) {
          c = j;
        }
      } else {
        if(c != -1) {
          d = j - 1;
          break;
        }
      }
    }
    if(c != -1 && d == -1) d = 9;
    if(d != -1) break;
  }
  
  for(int i = 0; i < 10; i++) {
    for(int j = 0; j < 10; j++) {
      if(s[j][i] == '#') {
        if(a == -1) {
          a = j;
        }
      } else {
        if(a != -1) {
          b = j - 1;
          break;
        }
      }
    }
    if(a != -1 && b == -1) b = 9;
    if(b != -1) break;
  }

  cout << a+1 << " " << b+1 << endl;
  cout << c+1 << " " << d+1 << endl;
  
  return 0;
}