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
  while(true) {
    bool b = true;
    for(int i = 0; i < s.length()-1; i++) {
      if(s.substr(i, 2) == "na") {
        s.insert(s.begin()+i+1, 'y');
        b = false;
      }
    }
    if(b) break;;
  }
  cout << s << endl;
  return 0;
}