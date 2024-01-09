#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n, k, q;
  cin >> n >> k >> q;
  int a[k];
  int l[q];
  for(int i = 0; i < k; i++) cin >> a[i];
  for(int i = 0; i < q; i++) {
    cin >> l[i];
    l[i]--;
  }

  for(int i = 0; i < q; i++) {
    int now = l[i];
    int next = l[i] + 1;
    if(next >= k) {
      if(a[now] < n) {
        a[now]++;
      }
    } else {
      if(a[now] + 1 < a[next]) {
        a[now]++;
      }
    }
  }
  for(int i = 0; i < k; i++) {
    cout << a[i] << " ";
  }
  cout << "\n";

  return 0;
}