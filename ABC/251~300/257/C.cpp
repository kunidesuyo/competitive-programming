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
  string s;
  cin >> s;
  int w[n];
  for(int i = 0; i < n; i++) cin >> w[i];
  vector<int> child, adult;
  for(int i = 0; i < n; i++) {
    if(s[i] == '0') {
      child.push_back(w[i]);
    } else {
      adult.push_back(w[i]);
    }
  }

  sort(all(child));
  sort(all(adult));

  int ans = -1;
  for(auto c: child) {
    int now = 0;
    now += lower_bound(all(child), c) - child.begin();
    now += adult.size() - (lower_bound(all(adult), c) - adult.begin());
    ans = max(ans, now);
  }

  for(auto a: adult) {
    int now = 0;
    now += lower_bound(all(child), a) - child.begin();
    now += adult.size() - (lower_bound(all(adult), a) - adult.begin());
    ans = max(ans, now);
  }

  int boundary[2] = {1, 1000000000};

  for(auto b: boundary) {
    int now = 0;
    now += lower_bound(all(child), b) - child.begin();
    now += adult.size() - (lower_bound(all(adult), b) - adult.begin());
    ans = max(ans, now);
  }
  
  cout << ans << endl;

  return 0;
}