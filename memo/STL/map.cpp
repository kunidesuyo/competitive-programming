#include <bits/stdc++.h>

#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;

using namespace std;

int main() {
  // 宣言: map<(keyの型), (valueの型)>
  map<int, int> m;

  // 代入: O(logN)
  m[0] = 0;
  // m.insert({key, value});
  m.insert({1, 1});

  // 参照: O(logN)
  cout << m[0] << endl;     // 0
  cout << m.at(1) << endl;  // 1

  // 削除: O(logN)
  m.erase(1);

  // 存在判定: O(logN)
  cout << m.count(0) << endl;  // 1
  cout << m.count(1) << endl;  // 0

  // 要素数の取得: O(1)
  cout << m.size() << endl;  // 1

  return 0;
}
