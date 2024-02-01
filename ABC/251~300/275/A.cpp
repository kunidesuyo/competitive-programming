#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n;
  vector<int> a;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int aa;
    cin >> aa;
    a.push_back(aa);
  }

  int index = -1;
  int maxi = -1;
  
  for(int i = 0; i < n; i++) {
    if(a[i] > maxi) {
      index = i;
      maxi = a[i];
    }
  }
  cout << index+1 << endl;
  return 0;
}