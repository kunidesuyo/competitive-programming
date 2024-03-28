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
  if(s.length() != 8) {
    cout << "No" << endl;
    return 0;
  }
  char head = s[0];
  char tail = s[7];
  if(!('A' <= head && head <= 'Z')) {
    cout << "No" << endl;
    return 0;
  }
  if(!('A' <= tail && tail <= 'Z')) {
    cout << "No" << endl;
    return 0;
  }
  string num = s.substr(1, 6);
  int number = stoi(num);
  if(!(100000 <= number && number <= 999999)) {
    cout << "No" << endl;
    return 0;
  }
  
  cout << "Yes" << endl;
  return 0;
}