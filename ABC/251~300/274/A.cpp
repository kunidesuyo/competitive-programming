#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  vector<int> ans;
  for(int i = 0; i < 5; i++) {
    int num = b / a;
    ans.push_back(num);
    b %= a;
    b *= 10;
  }
  // for(int i = 0; i < 5; i++) {
  //   cout << ans[i] << endl;
  // }

  if(ans[4] >= 5) {
    ans[3]++;
  }
  for(int i = 3; i >= 0; i--) {
    if(ans[0]) continue;
    if(ans[i] == 10) {
      ans[i] = 0;
      ans[i-1]++;
    }
  }
  cout << ans[0];
  cout << ".";
  for(int i = 1; i < 4; i++) cout << ans[i];
  cout << "\n";
  return 0;
}