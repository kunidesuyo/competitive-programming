#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  string s;
  cin >> s;
  int a = int(s[0] - '0');
  int b = int(s[2] - '0');
  cout << a*b << endl;
  return 0;
}