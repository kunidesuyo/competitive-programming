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
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  vector<bool> base(4, false);
  int p = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 3; j >= 1; j--) {
      if(base[j]) {
        if(j + a[i] >= 4) {
          p++;
          base[j] = false;
        } else {
          base[j] = false;
          base[j + a[i]] = true;
        }
      }
    }
    if(a[i] >= 4) {
      p++;
    } else {
      base[a[i]] = true;
    }
  }
  cout << p << endl;
}