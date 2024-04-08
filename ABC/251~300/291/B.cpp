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
  int N = 5*n;
  vector<int> x;
  int ans = 0;
  for(int i = 0; i < N; i++) {
    int xx;
    cin >> xx;
    x.push_back(xx);
    ans += x[i];
  }
  sort(all(x));
  // for(int i = 0; i < N; i++) cout << x[i] << endl;
  for(int i = 0; i < n; i++) {
    ans -= x[i];
    ans -= x[N-1-i];
  }
  cout << setprecision(10) << (double)ans / (3*n) << endl;
  return 0;
}