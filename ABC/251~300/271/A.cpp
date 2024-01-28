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
  string s = "ABCDEF";
  char ans[2];
  int tmp = n % 16;
  if(tmp >= 10) {
    ans[0] = s[tmp-10];
  } else {
    ans[0] = '0' + tmp;
  }
  n /= 16;
  tmp = n % 16;
  if(tmp >= 10) {
    ans[1] = s[tmp-10];
  } else {
    ans[1] = '0' + tmp;
  }

  cout << ans[1] << ans[0] << endl;
  
  return 0;
}