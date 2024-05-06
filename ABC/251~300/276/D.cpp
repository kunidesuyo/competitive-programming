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
  int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int aa[n];
  for(int i = 0; i < n; i++) aa[i] = a[i];

  vector<int> div2(n);
  vector<int> div3(n);

  for(int i = 0; i < n; i++) {
    while(aa[i] % 2 == 0) {
      aa[i] /= 2;
      div2[i]++;
    }
  }

  for(int i = 0; i < n; i++) {
    while(aa[i] % 3 == 0) {
      aa[i] /= 3;
      div3[i]++;
    }
  }

  int base = aa[0];
  for(int i = 0; i < n; i++) {
    if(base != aa[i]) {
      cout << -1 << endl;
      return 0;
    }
  }

  int min2 = div2[0];
  int min3 = div3[0];

  for(int i = 0; i < n; i++) {
    if(min2 > div2[i]) min2 = div2[i];
    if(min3 > div3[i]) min3 = div3[i];
  }

  int ans = 0;
  for(int i = 0; i < n; i++) {
    ans += div2[i] - min2;
    ans += div3[i] - min3;
  }
  cout << ans << endl;

  return 0;
}