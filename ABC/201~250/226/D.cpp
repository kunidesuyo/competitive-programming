#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int gcd(int a, int b){
  if(a%b == 0){
    return b;
  }else{
    return gcd(b, a%b);
  }
}

int main() {
  int n;
  cin >> n;
  int x[n], y[n];
  for(int i = 0; i < n; i++) cin >> x[i] >> y[i];
  set<pair<int, int>> s;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(i == j) continue;
      int a = x[i] - x[j];
      int b = y[i] - y[j];
      if(a == 0 && b != 0) {
        s.insert({0, b/abs(b)});
      } else if(a != 0 && b == 0) {
        s.insert({a/abs(a), 0});
      } else {
        int c = gcd(abs(a), abs(b));
        s.insert({a/c, b/c});
      }
    }
  }
  cout << (int)s.size() << endl;
  return 0;
}