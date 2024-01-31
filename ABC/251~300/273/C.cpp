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
  for(int i = 0; i < n; i++) cin >> a[i];
  set<int> ex;
  vector<int> s;
  for(int i = 0; i < n; i++) {
    if(ex.find(a[i]) == ex.end()) {
      s.push_back(a[i]);
      ex.insert(a[i]);
    }
  }
  sort(all(s));

  vector<int> ans(n, 0);
  for(int i = 0; i < n; i++) {
    int num = lower_bound(all(s), a[i]) - s.begin();
    num = s.size() - num - 1;
    ans[num]++;
  }
  for(auto aa : ans) cout << aa << endl;

  return 0;
}