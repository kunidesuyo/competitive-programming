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
  string s[n];
  for(int i = 0; i < n; i++) cin >> s[i];

  int ans = n * 10 * 10;
  for(int num = 0; num < 10; num++) {
    vector<int> dup(10, 0);
    for(int j = 0; j < 10; j++) {
      for(int i = 0; i < n; i++) {
        if(num == s[i][j] - '0') dup[j]++;
      }
    }
    vector<int> sorted_dup;
    // for(int i = 0; i < 10; i++) {
    //   cout << dup[i] << " ";
    // }
    // cout << "\n";
    copy(dup.begin(), dup.end(), back_inserter(sorted_dup));
    sort(sorted_dup.begin(), sorted_dup.end(), greater<int>());
    int max_dup = sorted_dup[0];
    // cout << max_dup << endl;
    int max_dup_index = -1;
    for(int i = 0; i < 10; i++) {
      if(dup[i] == max_dup) {
        max_dup_index = i;
      }
    }
    int mini = 10 * (max_dup - 1) + max_dup_index;
    ans = min(ans, mini);
  }
  cout << ans << endl;

  return 0;
}