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
  vector<string> s;
  for(int i = 0; i < n; i++) {
    string ss;
    cin >> ss;
    s.push_back(ss);
  } 
  sort(all(s));
  for(int i = 0; i < n-1; i++) {
    if(s[i] == s[i+1]) {
      cout << "No" << endl;
      return 0;
    }
  }
  char first[4] = {'H', 'D', 'C', 'S'};
  char second[13] = {'A' , '2' , '3' , '4' , '5' , '6' , '7' , '8' , '9' , 'T' , 'J' , 'Q' , 'K'};
  for(int i = 0; i < n; i++) {
    bool ok1 = false;
    for(int j = 0; j < 4; j++) {
      if(s[i][0] == first[j]) ok1 = true;
    }
    bool ok2 = false;
    for(int j = 0; j < 13; j++) {
      if(s[i][1] == second[j]) ok2 = true;
    }
    if(!(ok1 && ok2)) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}