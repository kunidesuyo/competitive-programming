#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;



int main() {
  int h, m;
  cin >> h >> m;

  while(true) {
    int a = h / 10;
    int b = h % 10;
    int c = m / 10;
    int d = m % 10;
    int hh = a * 10 + c;
    int mm = b * 10 + d;
    if(0 <= hh && hh <= 23 && 0 <= mm && mm <= 59) {
      cout << h << " "  << m << endl;
      return 0;
    }
    m++;
    if(m>=60) {
      h++;
      m-=60;
      if(h >= 24) {
        h-=24;
      }
    }
  }
  return 0;
}