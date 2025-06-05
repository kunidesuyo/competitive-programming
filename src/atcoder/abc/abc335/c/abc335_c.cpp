#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;
const ll INF = 1LL << 60;
const int inf = INT_MAX / 2;

int main() {
  int n, q;
  cin >> n >> q;
  vector<pair<int, int>> d;
  for (int i = n; i >= 1; i--) {
    d.push_back({i, 0});
  }

  int head_i = n - 1;
  for (int i = 0; i < q; i++) {
    int x;
    cin >> x;
    if (x == 1) {
      char y;
      cin >> y;
      pair<int, int> head;
      head = d[head_i];
      if (y == 'R') {
        head.first++;
      } else if (y == 'L') {
        head.first--;
      } else if (y == 'U') {
        head.second++;
      } else {
        head.second--;
      }
      d.push_back(head);
      head_i++;
      // cout << d[head_i].first << " " << d[head_i].second << endl;
    } else {
      int p;
      cin >> p;
      int index = head_i - p +1;
      // cout << head_i << " " << p << " " << index << endl;
      // cout << index << endl;
      cout << d[index].first << " " << d[index].second << endl;
    }
  }
  return 0;
}