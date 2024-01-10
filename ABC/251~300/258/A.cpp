#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int k;
  cin >> k;
  if(k >= 60) {
    k -= 60;
    cout << "22:";
    string m = to_string(k);
    if(m.length() == 1) {
      cout << "0" << m;
    } else {
      cout << m;
    }
  } else {
    cout << "21:";
    string m = to_string(k);
    if(m.length() == 1) {
      cout << "0" << m;
    } else {
      cout << m;
    }
  }
  cout << "\n";
  
  
  
  return 0;
}