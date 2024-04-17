#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()


using namespace std;

int main() {
  long long n, q;
  cin >> n >> q;
  long long a[n];
  long long x[q];
  for(long long i = 0; i < n; i++) cin >> a[i];
  for(long long i = 0; i < q; i++) cin >> x[i];

  // long long b[n+1];
  // b[0] = 0;
  // for(long long i = 0; i < n; i++) {
  //   b[i+1] = b[i] + a[i];
  // }
  for(long long i = 0; i < q; i++) {
    long long r = 0;
    long long sum = 0;
    long long ans = 0;
    for(long long l = 0; l < n; l++) {
      while(r < n && sum + a[r] <= x[i]) {
        sum += a[r];
        r++;
      }
      ans += r - l;
      if(r == l) r++;
      else sum -= a[l];
    }
    cout << ans << endl;
  }
  return 0;
}