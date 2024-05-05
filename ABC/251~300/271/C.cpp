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
  map<int, int> s;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    a[i]--;
    s[a[i]]++;
  }
  sort(a, a+n, greater<int>());
  int now = 0;
  set<int> ans;
  for(int i = 0; i < n; i++) {
    bool end = false;
    if(s[i] >= 1) {
      s[i]--;
      ans.insert(i);
    } else {
      if(now+1 < n) {
        for(int j = 0; j < 2; j++) {
          bool ok = false;
          while(now < n) {
            int x = a[now];
            if(s[x] >= 1) {
              s[x]--;
              now++;
              ok = true;
            } else {
              now++;
            }
            if(ok) break;
          }
          if(ok) {
            continue;
          } else {
            end = true;
            break;
          }
        }
        if(end) break;
        ans.insert(i);
      } else {
        end = true;
        break;
      }
    }
    if(end) break;
  }
  cout << ans.size() << endl;
  return 0;
}