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
  string at = "atcoder";
  int ans = 0;
  for(int i = 0; i < at.length(); i++) {
    char a = at[i];
    int index;
    for(int j = 0; j < s.length(); j++) {
      if(s[j] == a) {
        index = j;
        break;
      }
    }
    int diff = index - i;
    ans += diff;
    if(diff != 0) {
      for(int j = 0; j < diff; j++) {
        swap(s[index-j], s[index-j-1]);
      }
    }
  }
  cout << ans << endl;
  return 0;
}