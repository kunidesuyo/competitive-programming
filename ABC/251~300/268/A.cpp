#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  vector<int> d(101, 0);
  for(int i = 0; i < 5; i++) {
    int a;
    cin >> a;
    d[a]++;
  }
  int ans = 0;
  for(int i = 0; i <=100; i++) {
    if(d[i] != 0) ans++;
  }
  cout << ans << endl;
  return 0;
}