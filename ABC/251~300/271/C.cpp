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
  vector<int> a(n);
  for(int i = 0; i < n; i++) cin >> a[i];
  sort(a.begin(), a.end());

  list<int> ls;
  int t = 0;
  for(int i = 0; i < n; i++) {
    if(i == 0) {
      ls.push_back(a[i]);
      continue;
    }
    if(a[i] == a[i-1]) {
      t++;
    } else {
      ls.push_back(a[i]);
    }
  }

  if(n == 1) {
    if(a[0] == 1) {
      cout << 1 << endl;
    } else {
      cout << 0 << endl;
    }
    return 0;
  }

  int ans = 0;
  for(int i = 1; i <= n; i++) {
    if(ls.size() == 0 && t == 0) {
      ans = i-1;
      break;
    }
    bool end = false;
    if(ls.front() == i) {
      ls.pop_front();
    } else {
      if(t >= 2) {
        t -= 2;
      } else if(t == 1) {
        t = 0;
        if(ls.size() >= 1) {
          ls.pop_back();
        } else {
          ans = i-1;
          end = true;
        }
      } else {
        if(ls.size() >= 2) {
          ls.pop_back();
          ls.pop_back();
        } else {
          ans = i-1;
          break;
        }
      }
    }
    if(end) break;
  }
  cout << ans << endl;

  return 0;
}