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
  vector<string> s(n);
  for(int i = 0; i < n; i++) cin >> s[i];

  sort(s.begin(), s.begin()+k);
  for(int i = 0; i < k; i++) {
    cout << s[i] << endl;
  }

  return 0;
}