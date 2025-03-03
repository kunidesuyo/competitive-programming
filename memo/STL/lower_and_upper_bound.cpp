#include <bits/stdc++.h>

#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;
const ll INF = 1LL << 60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  // ソート済配列
  //     index: 0  1  2  3  4
  vector<int> x{1, 3, 5, 7, 9};

  // lower_boundは指定された要素の値*以上*の値が現れる最初のイテレータを取得する。
  vector<int> lb_index;
  lb_index.push_back(lower_bound(x.begin(), x.end(), 0) - x.begin());  // 0
  lb_index.push_back(lower_bound(x.begin(), x.end(), 4) - x.begin());  // 2
  lb_index.push_back(lower_bound(x.begin(), x.end(), 5) - x.begin());  // 2
  lb_index.push_back(lower_bound(x.begin(), x.end(), 10) - x.begin());  // 5 = x.end()
  for (auto i : lb_index) {
    cout << i << endl;
  }
  // 直接値を取得する
  vector<int> lb_value;
  lb_value.push_back(*lower_bound(x.begin(), x.end(), 0));  // 1
  lb_value.push_back(*lower_bound(x.begin(), x.end(), 4));  // 5
  lb_value.push_back(*lower_bound(x.begin(), x.end(), 5));  // 5
  // lb_value.push_back(*lower_bound(x.begin(), x.end(), 10));  // ?
  for (auto v : lb_value) {
    cout << v << endl;
  }

  // upper_boundは指定された要素の値より*大きい*値が現れる最初のイテレータを取得する。
  vector<int> ub_index;
  ub_index.push_back(upper_bound(x.begin(), x.end(), 0) - x.begin());  // 0
  ub_index.push_back(upper_bound(x.begin(), x.end(), 4) - x.begin());  // 2
  ub_index.push_back(upper_bound(x.begin(), x.end(), 5) - x.begin());  // 3
  ub_index.push_back(upper_bound(x.begin(), x.end(), 10) - x.begin());  // 5 = x.end()
  for (auto i : ub_index) {
    cout << i << endl;
  }

  // 直接値を取得する
  vector<int> ub_value;
  ub_value.push_back(*upper_bound(x.begin(), x.end(), 0));  // 1
  ub_value.push_back(*upper_bound(x.begin(), x.end(), 4));  // 5
  ub_value.push_back(*upper_bound(x.begin(), x.end(), 5));  // 7
  // ub_value.push_back(*upper_bound(x.begin(), x.end(), 10));  // 7
  for (auto v : ub_value) {
    cout << v << endl;
  }

  // lower_bound, upper_boundの由来
  // 指定した値を包含する左閉右開区間[)の
  // 下限の境界位置がlower_bound
  // 上限の境界位置がupper_bound

  // [1, 3, 5, 7, 9]
  // 6      [  )
  //        L  U
  // 

  return 0;
}