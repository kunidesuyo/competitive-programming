#include <bits/stdc++.h>

#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;
const ll INF = 1LL << 60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.length();
  if (n <= 3) {
    cout << s << endl;
    return 0;
  }

  for (int i = 0; i < 3; i++) {
    cout << s[i];
  }
  for (int i = 3; i < n; i++) {
    cout << '0';
  }
  cout << "\n";
  return 0;
}