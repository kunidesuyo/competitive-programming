#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int h[3], w[3];
  int max_h = 0;
  for(int i = 0; i < 3; i++) {
    cin >> h[i];
  }
  for(int i = 0; i < 3; i++) {
    cin >> w[i];
  }
  
  int a[3][3];
  int ans = 0;
  for(int h00 = 1; h00 <= h[0]; h00++) {
    for(int h01 = 1; h01 <= h[0]; h01++) {
      for(int h10 = 1; h10 <= h[1]; h10++) {
        for(int h11 = 1; h11 <= h[1]; h11++) {
          for(int h20 = 1; h20 <= h[2]; h20++) {
            for(int h21 = 1; h21 <= h[2]; h21++) {
              a[0][0] = h00;
              a[0][1] = h01;
              a[0][2] = h[0] - h00 - h01;
              a[1][0] = h10;
              a[1][1] = h11;
              a[1][2] = h[1] - h10 - h11;
              a[2][0] = h20;
              a[2][1] = h21;
              a[2][2] = h[2] - h20 - h21;
              if(a[0][2] < 1 || a[1][2] < 1 || a[2][2] < 1) {
                break;
              }
              bool is_ok = true;
              for(int j = 0; j < 3; j++) {
                int sum = 0;
                for(int i = 0; i < 3; i++) {
                  sum += a[i][j];
                }
                if(sum != w[j]) {
                  is_ok = false;
                  break;
                }
              }
              if(is_ok) {
                ans++;
              }
            }
          }    
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}