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
  vector<int> a(26, 0);
  for(int i = 0; i < 3; i++) {
    a[s[i] - 'a']++;
  }
  for(int i = 0; i < 26; i++) {
    if(a[i] == 1) {
      cout << (char)('a' + i) << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}