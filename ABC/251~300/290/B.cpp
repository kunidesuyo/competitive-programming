#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  int num = 0;
  for(int i = 0; i < n; i++) {
    if(num < k) {
      if(s[i] == 'o') num++;
      cout << s[i]; 
    } else {
      cout << "x";
    }
  }
  cout << "\n";
  return 0;
}