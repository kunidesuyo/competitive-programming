#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  string s[8];

  for(int i = 0; i < 8; i++) {
    cin >> s[i];
  }

  int ii, jj;
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if(s[i][j] == '*') {
        ii = i;
        jj = j;
      }
    }
  }

  char a;
  a = 'a' + jj;
  int b;
  b = 8 - ii;

  cout << a << b << endl;
  

  return 0;
}