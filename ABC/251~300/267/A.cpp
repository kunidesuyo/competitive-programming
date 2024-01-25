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
  if(s == "Monday") cout << 5 << endl;
  if(s == "Tuesday") cout << 4 << endl;
  if(s == "Wednesday") cout << 3 << endl;
  if(s == "Thursday") cout << 2 << endl;
  if(s == "Friday") cout << 1 << endl;
  return 0;
}