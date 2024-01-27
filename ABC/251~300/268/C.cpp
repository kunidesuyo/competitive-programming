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
  int p[n];
  for(int i = 0; i < n; i++) cin >> p[i];
  vector<int> ans(n, 0);
  for(int i = 0; i < n; i++) {
    ans[(i-p[i]-1+n)%n]++;
    ans[(i-p[i]+n)%n]++;
    ans[(i-p[i]+1+n)%n]++;
  }
  int maxi = -1;
  for(int i = 0; i < n; i++) {
    maxi = max(maxi, ans[i]);
  }
  cout << maxi << endl;
  return 0;
}