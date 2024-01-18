#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int a[5];
  vector<int> b(14, 0);
  for(int i = 0; i < 5; i++) {
    cin >> a[i];
    b[a[i]]++;
  }
  bool is3 = false;
  bool is2 = false;
  for(int i = 1; i <=13; i++) {
    if(b[i] == 2) is2 = true;
    if(b[i] == 3) is3 = true;
  }
  if(is3 && is2) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}