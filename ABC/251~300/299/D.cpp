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
  int l = 1;
  int r = n;

  while(true) {
    int mid = (l+r) / 2;
    cout << "? " << mid << endl;
    int s;
    cin >> s;
    if(s == 0) {
      l = mid;
    } else {
      r = mid;
    }
    if(r - l == 1) {
      cout << "! " << l << endl;
      break;
    }
  }

  return 0;
}