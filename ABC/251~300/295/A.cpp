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
  string w[n];
  for(int i = 0; i < n; i++) cin >> w[i];
  for(int i = 0; i < n; i++) {
    if(w[i] == "and" || w[i] == "not" || w[i] == "that" || w[i] == "the" || w[i] == "you") {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}