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
  map<string, int> m;

  for(int i = 0; i < n; i++) {
    if(i == 0) {
      m[s[i]] = 1;
      cout << s[i] << endl;
      continue;
    }
    if(m[s[i]] == 0) {
      m[s[i]] = 1;
      cout << s[i] << endl;
    } else {
      cout << s[i];
      cout << '(';
      cout << m[s[i]];
      cout << ')' << endl;
      m[s[i]]++;
    }
  }

  return 0;
}