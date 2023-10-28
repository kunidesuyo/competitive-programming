#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int a[n];
  int b[k];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < k; i++) cin >> b[i];
  for(int i = 0; i < k; i++) b[i]--;

  int m = -1;
  for(int i = 0; i < n; i++) {
    if(a[i] > m) {
      m = a[i];
    }
  }
  for(int i = 0; i < k; i++) {
    if(a[b[i]] == m) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  // for(int i = 0; i < n; i++) {
  //   if(a[i] == m) {
  //     bool ok = false;
  //     for(int j = 0; j < k; j++) {
  //       if(i == b[j]) {
  //         ok = true;
  //       } 
  //     }
  //     if(ok) {
  //       cout << i << endl;
  //       cout << "Yes" << endl;
  //       return 0;
  //     }
  //   }
  // }
  // cout << "No" << endl;

  return 0;
}