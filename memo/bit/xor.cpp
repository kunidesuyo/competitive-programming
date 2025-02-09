#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#include <cmath>

#define all(x) (x).begin(), (x).end()

using ll = long long;
const ll INF = 1LL << 60;
const int inf = INT_MAX / 2;

int main() {
  // XOR: ^演算子で計算できる
  int a;
  a = 0^0; cout << a << endl; // 0
  a = 1^0; cout << a << endl; // 1
  a = 0^1; cout << a << endl; // 1
  a = 1^1; cout << a << endl; // 0

  // ^はbitの剰余計算(mod2)として使うことができる
  // 00000の3桁目に1を足してmod2の剰余を計算する場合
  int b = 0; // 00000
  int c = 1<<(3-1); // 00100
  int d = b ^ c;
  cout << d << endl; // 00100(4)

  d = d ^ c; // 00100 ^ 00100 = 00000
  cout << d << endl; // 00000(0)

  return 0;
}