#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  vector<vector<int>> r(7);
  r[0].push_back(7-1);
  r[1].push_back(4-1);
  r[2].push_back(8-1);
  r[2].push_back(2-1);
  r[3].push_back(5-1);
  r[3].push_back(1-1);
  r[4].push_back(9-1);
  r[4].push_back(3-1);
  r[5].push_back(6-1);
  r[6].push_back(9);
  string s;
  cin >> s;
  if(s[0] != '0') {
    cout << "No" << endl;
    return 0;
  }
  vector<int> num_r(7, 0);
  for(int i = 0; i < 7; i++) {
    for(auto ri : r[i]) {
      if(s[ri] == '1') num_r[i]++;
    }
    // cout << num_r[i] << endl;
  }
  for(int i = 0; i < 7-1; i++) {
    for(int j = i+1; j < 7; j++) {
      if(num_r[i] == 1 && num_r[j] == 1) {
        bool is_split = false;
        for(int k = i+1; k < j; k++) {
          if(num_r[k] == 0) is_split = true;
        }
        if(is_split) {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }
  cout << "No" << endl;
  return 0;
}