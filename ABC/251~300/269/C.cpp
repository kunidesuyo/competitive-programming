#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  ll n;
  cin >> n;
  vector<int> a;
  int index = 0;
  ll pow2n[100];
  pow2n[0] = 1;
  while(n != 0) {
    if(index != 0) pow2n[index] = 2 * pow2n[index-1];
    if(n%2 == 1) {
      a.push_back(index);
    }
    n /= 2;
    index++;
  }
  cout << 0 << endl;
  int bit_size = a.size();
  for(int bit = 1; bit < 1<<bit_size; bit++) {
    ll output = 0;
    for(int i = 0; i < bit_size; i++) {
      if(bit & (1<<i)) {
        output += pow2n[a[i]];
      }
    }
    cout << output << endl;
  }
  return 0;
}