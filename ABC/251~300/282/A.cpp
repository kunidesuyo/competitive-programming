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
  string ans;
  for(int i = 0; i < k; i++) {
    char now = 'A' + i;
    ans += now;
  }
  cout << ans << endl;
  return 0;
}