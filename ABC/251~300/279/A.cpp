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
  int ans = s.length();
  for(int i = 0; i < s.length(); i++) {
    if(s[i] == 'w') ans++;
  }
  cout << ans << endl;
  return 0;
}