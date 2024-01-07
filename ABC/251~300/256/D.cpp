#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  vector<pair<int, int>> lr;
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int l, r;
    cin >> l;
    cin >> r;
    lr.push_back(make_pair(l, r));
  }

  sort(all(lr));

  // for(auto p : lr) {
  //   cout << p.first << " " << p.second << endl;
  // }

  vector<pair<int, int>> ans;
  int begin = -1;
  int end = -1;
  for(auto p : lr) {

    if(begin < 0) {
      begin = p.first;
    }
    if(end < 0) {
      end = p.second;
    }

    if(p.first <= end && end < p.second) {
      end = p.second;
    }

    if(end < p.first) {
      ans.push_back(make_pair(begin, end));
      begin = p.first;
      end = p.second;
    }
    
  }
  ans.push_back(make_pair(begin, end));

  for(auto a : ans) {
    cout << a.first << " " << a.second << endl;
  }

  return 0;
}