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
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    a[i]--;
  }
  set<int> s;
  for(int i = 0; i < n; i++) s.insert(i);
  for(int i = 0; i < n; i++) {
    if(s.find(i) != s.end()) {
      s.erase(a[i]);
    }
  }
  cout << s.size() << endl;
  for(auto ans: s) {
    cout << ans+1 << " ";
  }
  cout << "\n";
  return 0;
}