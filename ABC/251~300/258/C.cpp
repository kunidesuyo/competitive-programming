#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  string s;
  cin >> s;

  int start = 0;
  for(int i = 0; i < q; i++) {
    int a, b;
    cin >> a >> b;
    if(a == 1) {
      start += b;
      start %= n;
    } else {
      cout << s[(n - start + b - 1) % n] << endl;
    }
  }
  return 0;
}