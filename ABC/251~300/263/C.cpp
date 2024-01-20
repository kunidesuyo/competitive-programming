#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int n, m;
void print(vector<int> s) {
  for(auto a: s) {
    cout << a << " ";
  }
  cout << "\n";
}
void solve(vector<int> s) {
  if((int)s.size() == n) {
    print(s);
    return;
  }
  int end = s.back();
  s.push_back(end+1);
  while(s.back() <= m) {
    solve(s);
    s.back()++;
  }
}

int main() {
  cin >> n >> m;
  for(int i = 1; i <= m; i++) {
    solve({i});
  }
  return 0;
}