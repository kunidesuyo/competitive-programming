#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> g(n);
  vector<pair<int, int>> ab;
  for(int i = 0; i < m; i++){
    int a, b;
    cin >> a >> b;
    a--; b--;
    // cout << a << " " << b << endl;
    ab.push_back({a, b});
    ab.push_back({b, a});
  }
  // cout << endl;
  // for(auto abab : ab) {
  //   cout << abab.first << " " << abab.second << endl;
  // }
  sort(all(ab));
  for(auto x : ab) {
    int a = x.first;
    int b = x.second;
    g[a].push_back(b);
  }
  // cout << endl;
  // for(auto abab : ab) {
  //   cout << abab.first << " " << abab.second << endl;
  // }
  for(auto gg : g) {
    int d = gg.size();
    cout << d << " ";
    for(auto ggg : gg) {
      cout << ggg+1 << " ";
    }
    cout << "\n";
  }
  return 0;
}