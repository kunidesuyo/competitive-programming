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
  vector<int> odd, even;
  for(int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if(a % 2 == 0) {
      even.push_back(a);
    } else {
      odd.push_back(a);
    }
  }
  sort(odd.rbegin(), odd.rend());
  sort(even.rbegin(), even.rend());
  int ans = -1;
  if(odd.size() >= 2) ans = max(ans, odd[0] + odd[1]);
  if(even.size() >= 2) ans = max(ans, even[0] + even[1]);
  cout << ans << endl;

  return 0;
}