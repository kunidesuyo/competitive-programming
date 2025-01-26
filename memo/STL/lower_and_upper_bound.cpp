#include <bits/stdc++.h>

#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;
const ll INF = 1LL << 60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  //            0  1  2  3  4
  vector<int> x{1, 3, 5, 7, 9};

  // lower_boundは指定された要素の値 *以上*
  // の値が現れる最初のイテレータを取得する。
  int a = lower_bound(x.begin(), x.end(), 4) - x.begin();  // 2
  int b = lower_bound(x.begin(), x.end(), 5) - x.begin();  // 2

  // upper_boundは指定された要素の値より *大きい*
  // 値が現れる最初のイテレータを取得する。
  int c = upper_bound(x.begin(), x.end(), 4) - x.begin();  // 2
  int d = upper_bound(x.begin(), x.end(), 5) - x.begin();  // 3

  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
  cout << d << endl;

  return 0;
}