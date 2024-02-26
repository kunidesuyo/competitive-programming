#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  string s[h], t[h];
  for(int i = 0; i < h; i++) cin >> s[i];
  for(int i = 0; i < h; i++) cin >> t[i];
  vector<string> ss, tt;
  for(int i = 0; i < w; i++) {
    string sss = "";
    string ttt = "";
    for(int j = 0; j < h; j++) {
      sss += s[j][i];
      ttt += t[j][i];
    }
    ss.push_back(sss);
    tt.push_back(ttt);
  }

  sort(all(ss));
  sort(all(tt));
  
  for(int i = 0; i < w; i++) {
    if(ss[i] != tt[i]) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  
  return 0;
}