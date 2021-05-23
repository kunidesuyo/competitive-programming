#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
   int n;
   cin >> n;

   int m;
   int val;

   for(int i = 1; i <= n; i++) {
       val = i * (i+1) / 2;
       if(val >= n) {
           m = i;
           break;
       }
   }

    for(int i = 1; i <= m; i++) {
        if(val - n != i) {
            cout << i << endl;
        }
    }


    return 0;
}