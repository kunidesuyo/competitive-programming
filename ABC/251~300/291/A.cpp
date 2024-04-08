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
  int n = s.length();
  for(int i = 0; i < n; i++) {
    if('A' <= s[i] && s[i] <= 'Z') {
      cout << i+1 << endl;
    }
  }
  return 0;
}